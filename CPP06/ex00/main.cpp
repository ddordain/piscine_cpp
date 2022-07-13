/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:21:14 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/13 15:57:53 by ddordain         ###   ########.fr       */
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
	double							singleDigit = -1; // if singleDigit, force this print
	
	//select the string 
	while (startStr != strTmp.end() && std::isspace(*startStr)) {
		startStr++;
		endStr++;
	}
	while (endStr != strTmp.end() && !std::isspace(*endStr)) {
		endStr++;
	}
	std::string str(startStr, endStr);

	//check for single digit, and signleDigit followed by a non digit
	if (str.length() == 1 && std::isdigit(str[0])) {
		singleDigit = strtod(str.c_str(),NULL);
	} 
	if (str.length() >= 2 && std::isdigit(str[0]) && !std::isdigit(str[1])) {
		singleDigit = strtod(str.c_str(),NULL);
	}

	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0])) {
		buffer = str[0];
	} else if (str.compare("inf") == 0|| str.compare("+inff") == 0|| str.compare("-inff") == 0 || str.compare("+inf") == 0 || str.compare("-inf") == 0|| str.compare("inff") == 0) {
		buffer = strtod(str.c_str(), NULL);
	} else if ((str.length() > 1 && !std::isdigit(str[0]) && str[0] != '-' && str[0] != '+')
				 || !std::isdigit(str[1])) {
		buffer = strtod("NAN", NULL);
	} else {
		buffer = strtod(str.c_str(), NULL);
	}
	// std::cout << "str  " << str << std::endl;
	// std::cout << "buffer  " << std::isnan(buffer) << std::endl;

//char print
	std::cout << "char : ";
	if (singleDigit > 0) {
		std::cout << "not displayable" << std::endl;
	} else if (buffer < CHAR_MIN || buffer > CHAR_MAX || std::isnan(buffer) == true) {
		std::cout << "impossible" << std::endl;
	} else if (std::isprint(buffer) == false) {
		std::cout << "not diplayable" << std::endl;
	} else {
		std::cout << static_cast<char>(buffer) << std::endl;
	}

//int print
	std::cout << "int : ";
	if (singleDigit >= 0) {
		std::cout << static_cast<int>(singleDigit) << std::endl; // not casted... for lecture purpose
	} else if (buffer < INT_MIN || buffer > INT_MAX || std::isnan(buffer) == true || std::isinf(buffer) == true) {
		std::cout << "impossible" << std::endl;
	} else {
		std::cout << static_cast<int>(buffer) << std::endl;
	}

//float print
	std::cout << "float : ";
	if (singleDigit >= 0) {
		std::cout << static_cast<float>(singleDigit) << std::endl; // not casted... for lecture purpose
	} else if (std::isnan(buffer) == true) {
		std::cout << "nanf" << std::endl;
	} else if (std::isinf(buffer) == true) {
		if (buffer > 0) {std::cout << "+inff" << std::endl;}
		else {std::cout << "-inff" << std::endl;}
	} else {
		std::cout << static_cast<float>(buffer) << "f" << std::endl;
	}

//double
	std::cout << "double : ";
	if (singleDigit >= 0) {
		std::cout << singleDigit << std::endl; // not casted... for lecture purpose
	} else if (std::isnan(buffer) == true) {
		std::cout << "nan" << std::endl;
	} else if (std::isinf(buffer) == true) {
		if (buffer > 0) {std::cout << "+inf" << std::endl;}
		else {std::cout << "-inf" << std::endl;}
	} else {
		std::cout << buffer << std::endl;
	}
}
