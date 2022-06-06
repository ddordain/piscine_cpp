/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:41:47 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/06 15:44:13 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>

#define PRINT(X) std::cout << X << std::endl;

int main(int ac, char **av) {
	if (ac != 4) { return (std::cerr << " WRONG INPUTS, please insert <filename> <string1> <sstring2>" << std::endl, EXIT_FAILURE); }

	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		filename = av[1];
	std::string		s1 = av[2]; //search
	std::string		s2 = av[3]; //replace
	std::string		filenameReplace;
	std::string		buffer;
	std::size_t		index = 0;

	if (s1.empty() == true || s2.empty() == true) {return (std::cerr << "ERROR: EMPTY STRING IS UNDEFINED BEHAVIOR." << std::endl, EXIT_FAILURE); }

	ifs.open(filename.c_str(), std::ifstream::in); // open filename
	if (ifs.fail()) {return (std::cerr << " OPEN ERROR" << std::endl, EXIT_FAILURE); }

	filenameReplace = filename.append(".replace");
	ofs.open(filenameReplace.c_str(), std::ifstream::out);
	if (ofs.fail()) {
		ifs.close();
		return (std::cerr << " OPEN ERROR" << std::endl, EXIT_FAILURE);
	}

	while (ifs.eof() == false) {
		std::getline(ifs, buffer);
		while (true) {
			index = buffer.find(s1);
			if (index == std::string::npos) {
				ofs << buffer;
				break ;
			} else {
				ofs << buffer.substr(0, index);
				ofs  << s2;
				buffer = buffer.substr(index + s1.size());
			}
		}
		ofs << std::endl;
	}
	ifs.close();
	ofs.close();
	return (EXIT_SUCCESS);
}
