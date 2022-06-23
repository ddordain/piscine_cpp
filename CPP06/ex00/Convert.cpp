/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:22:58 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/23 18:16:11 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() :	char_('0'),
					 	int_(0),
						float_(0),
						double_(0),
						plusInf_(false),
						minusInf_(false),
						nan_(false)
						{
}

Convert::Convert(const std::string& str) :	char_('0'),
					 	int_(0),
						float_(0),
						double_(0),
						plusInf_(false),
						minusInf_(false),
						nan_(false)
						{
	std::string	strTable[6] = {"-inff", "-inf", "+inf", "+inff", "nan", "nanf"};
	void	(Convert::*f[6]) (void) = {&Convert::minusInfIsTrue, &Convert::minusInfIsTrue, &Convert::plusInfIsTrue, &Convert::plusInfIsTrue, &Convert::nanIsTrue, &Convert::nanIsTrue};

	for (int i = 0; i < 6; i++) {
		if (str == strTable[i]) {
			(this->*f[i])();
		}
	}
}

Convert::Convert(const Convert& copy) {
	*this = copy;
}

Convert::~Convert() {}

Convert&	Convert::operator =(const Convert& convert) {
	if (this == &convert) {return (*this);}

	this->char_ = convert.char_;
	this->int_ = convert.int_;
	this->float_ = convert.float_;
	this->double_ = convert.double_;
	this->plusInf_ = convert.plusInf_;
	this->minusInf_ = convert.minusInf_;
	this->nan_ = convert.nan_;
	return (*this);
}

bool	Convert::isChar(const std::string& str) {
	if (str.length() != 1) {return (false);}
	// if (std::isprint(str[0]) != 1) {return (false);}

	return (true);
}

bool	Convert::isInt(const std::string& str) {
	for (int i = 0; i < str.length(); i++) {
		if (i == 0 && std::isdigit(str[i]) != 1 && str[i] != '-') {return (false);}
		if (i != 0 && std::isdigit(str[i]) != 1) {return (false);}
	}

	return (true);
}


// see https://stackoverflow.com/questions/447206/c-isfloat-function
// thank you stack overflow for this awesome function

bool	Convert::isFloat(const std::string& str) {
	std::string::const_iterator	i = str.begin();
	bool						decimalPoint = false;
	int							minSize = 0;
    if(str.size() > 0 && (str[0] == '-' || str[0] == '+')) {
    	i++;
    	minSize++;
    }
	while (i != str.end()) {
		if (*i == '.') {
			if (decimalPoint == false) {decimalPoint = true;}
			else {break;}
		} else if (std::isdigit(*i) != 1 && ((*i != 'f') || i + 1 != str.end() || decimalPoint == false)) {break;}
	}
	return (str.size() > minSize && i == str.end());
}

bool	Convert::isDouble(const std::string& str) {
	std::string::const_iterator	i = str.begin();
	bool						decimalPoint = false;
	int							minSize = 0;
    if(str.size() > 0 && (str[0] == '-' || str[0] == '+')) {
    	i++;
    	minSize++;
    }
	while (i != str.end()) {
		if (*i == '.') {
			if (decimalPoint == false) {decimalPoint = true;}
			else {break;}
		} else if (std::isdigit(*i) != 1) {break;}
	}
	return (str.size() > minSize && i == str.end());
}

void	Convert::plusInfIsTrue() {this->plusInf_ = true;}
void	Convert::minusInfIsTrue() {this->minusInf_ = true;}
void	Convert::nanIsTrue() {this->nan_ = true;}
