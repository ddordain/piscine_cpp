/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:22:58 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/24 00:35:18 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() :	char_('0'),
					 	int_(0),
						float_(0),
						double_(0),
						plusInf_(false),
						minusInf_(false),
						nan_(false),
						noType_(false)
						{
}

Convert::Convert(const std::string& str) :	char_('0'),
					 	int_(0),
						float_(0),
						double_(0),
						plusInf_(false),
						minusInf_(false),
						nan_(false),
						noType_(false)
						{
	std::string	strTable[6] = {"-inff", "-inf", "+inf", "+inff", "nan", "nanf"};
	void	(Convert::*f[6]) (void) = {&Convert::minusInfIsTrue, &Convert::minusInfIsTrue, &Convert::plusInfIsTrue, &Convert::plusInfIsTrue, &Convert::nanIsTrue, &Convert::nanIsTrue};

	for (int i = 0; i < 6; i++) {
		if (str == strTable[i]) {
			(this->*f[i])();
		}
	}
	this->isOverflow(str);
	if (isInt(str)) {this->convertInt(str);}
	else if (isChar(str)) {this->convertChar(str);}
	else if (isFloat(str)) {this->convertFloat(str);}
	else if (isDouble(str)) {this->convertDouble(str);}
	else {this->noType_ = true;}
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
	if (std::isprint(str[0]) != 1) {return (false);}

	return (true);
}

bool	Convert::isInt(const std::string& str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (i == 0 && std::isdigit(str[i]) != 1 && str[i] != '-') {return (false);}
		if (i != 0 && std::isdigit(str[i]) != 1) {return (false);}
	}

	return (true);
}


// see https://stackoverflow.com/questions/447206/c-isfloat-function

bool	Convert::isFloat(const std::string& str) {
	std::string::const_iterator	i = str.begin();
	bool						decimalPoint = false;
	size_t							minSize = 0;
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
	size_t							minSize = 0;
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

void	Convert::isOverflow(const std::string& str) {
	double	bufferDouble = std::strtod(str.c_str(), NULL);
	if (bufferDouble < CHAR_MIN || bufferDouble > CHAR_MIN) {this->overflowChar_ = true;}
	if (bufferDouble < INT_MIN || bufferDouble > INT_MAX) {this->overflowChar_ = true;}
	if (bufferDouble < -(__FLT_MAX__) || bufferDouble > __FLT_MAX__) {this->overflowFloat_ = true;}
		// this->overflowDouble_ = true;
}

void	Convert::convertChar(const std::string& str) {
	this->char_ = str[0];
	this->int_ = static_cast<int>(this->char_);
	this->float_ = static_cast<float>(this->char_);
	this->double_ = static_cast<double>(this->char_);
}

void	Convert::convertInt(const std::string& str) {
	this->int_ = std::atoi(str.c_str());
	this->char_ = static_cast<char>(this->int_);
	this->float_ = static_cast<float>(this->int_);
	this->double_ = static_cast<double>(this->int_);
}

void	Convert::convertFloat(const std::string& str) {
	this->float_ = std::strtof(str.c_str(), NULL);
	this->char_ = static_cast<char>(this->float_);
	this->int_ = static_cast<int>(this->float_);
	this->double_ = static_cast<double>(this->float_);
}

void	Convert::convertDouble(const std::string& str) {
	this->double_ = std::strtod(str.c_str(), NULL);
	this->char_ = static_cast<char>(this->double_);
	this->int_ = static_cast<int>(this->double_);
	this->float_ = static_cast<float>(this->double_);
}

void	Convert::print() {
	//char 
	if (this->plusInf_ || this->minusInf_ || this->nan_ || this->noType_ || this->overflowChar_) {
		std::cout << "char : impossible" << std::endl;
	} else if (std::isprint(static_cast<int>(this->char_)) == 0) {
		std::cout << "char : Non displayable" << std::endl;
	} else {
		std::cout << "char : " << this->char_ << std::endl;
	}

	//int
	if (this->plusInf_ || this->minusInf_ || this->nan_ || this->noType_ || this->overflowInt_) {
		std::cout << "int : impossible" << std::endl;
	} else {
		std::cout << "int : " << this->int_ << std::endl;
	}

	// float
	if (this->noType_ || this->overflowFloat_) {
		std::cout << "float : impossible" << std::endl;
	} else if (this->plusInf_ == true) {
		std::cout << "float : +inff" << std::endl;
	} else if (this->minusInf_ == true) {
		std::cout << "float : -inff" << std::endl;
	} else if (this->nan_ == true) {
		std::cout << "float : nanf" << std::endl;
	} else {
		std::cout << "float : " << this->float_ << "f" << std::endl;
	}

	// double 
	if (this->noType_ || this->overflowDouble_) {
		std::cout << "double : impossible" << std::endl;
	} else if (this->plusInf_ == true) {
		std::cout << "double : +inf" << std::endl;
	} else if (this->minusInf_ == true) {
		std::cout << "double : -inf" << std::endl;
	} else if (this->nan_ == true) {
		std::cout << "double : nan" << std::endl;
	} else {
		std::cout << "double : " << this->double_ << std::endl;
	}
}