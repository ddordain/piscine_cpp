/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:21:14 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/24 14:39:03 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cfloat>
#include <string>
#include <cctype>
#include <sstream>
#include <math.h>
#include <climits>
#include <string>

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "ERROR : ./convert <value_to_convert>" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string						strTmp = av[1];
	std::string::const_iterator 	startStr = strTmp.begin();
	std::string::const_iterator		endStr = strTmp.begin();
	double							buffer;

	while (startStr != strTmp.end() && std::isspace(*startStr)) {
		startStr++;
		endStr++;
	}
	while (endStr != strTmp.end() && !std::isspace(*endStr)) {
		endStr++;
	}
	std::string str(startStr, endStr);

	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0])) {
		buffer = str[0];
	} else {
		buffer = strtod(str.c_str(), NULL);
	}
	std::cout << "str  " << str << std::endl;
	std::cout << "buffer  " << buffer << std::endl;

//char print
	std::cout << "char : ";
	if (buffer < CHAR_MIN || buffer > CHAR_MAX || std::isnan(buffer) == true) {
		std::cout << "impossible" << std::endl;
	} else if (std::isprint(buffer) == false) {
		std::cout << "not diplayable" << std::endl;
	} else {
		std::cout << static_cast<char>(buffer) << std::endl;
	}

//int print
	std::cout << "int : ";
	if (buffer < INT_MIN || buffer > INT_MAX || std::isnan(buffer) == true || std::isinf(buffer) == true) {
		std::cout << "impossible" << std::endl;
	} else {
		std::cout << static_cast<int>(buffer) << std::endl;
	}

//float print
	std::cout << "float : ";
	if (std::isnan(buffer) == true) {
		std::cout << "nanf" << std::endl;
	} else if (std::isinf(buffer) == true) {
		if (buffer > 0) {std::cout << "+inff" << std::endl;}
		else {std::cout << "-inff" << std::endl;}
	} else {
		std::cout << static_cast<float>(buffer) << "f" << std::endl;
	}

//double
	std::cout << "double : ";
	if (std::isnan(buffer) == true) {
		std::cout << "nan" << std::endl;
	} else if (std::isinf(buffer) == true) {
		if (buffer > 0) {std::cout << "+inf" << std::endl;}
		else {std::cout << "-inf" << std::endl;}
	} else {
		std::cout << buffer << std::endl;
	}
}
