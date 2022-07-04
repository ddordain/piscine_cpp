/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:13:44 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/04 11:08:03 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_(0) {
}

Fixed::Fixed(int const integer) : fixed_(integer * (1 << Fixed::bits_)) {
}

Fixed::Fixed(float const decimal) : fixed_(roundf(decimal * (1 << Fixed::bits_))) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed& copy) {
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed& fixed) {
	this->fixed_ = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const {
	return (this->fixed_);
}

void	Fixed::setRawBits(const int fixed) {
	PRINT("setRawBits member function called");
	this->fixed_ = fixed;
}

int	Fixed::toInt() const {
	return (this->fixed_ / (1 << Fixed::bits_));
}

float Fixed::toFloat() const {
	return (static_cast<float>(this->fixed_) / (1 << Fixed::bits_));
}

std::ostream&	operator <<(std::ostream& o, const Fixed& fixed) {
	o << fixed.toFloat();
	return o;
}

bool	Fixed::operator >(const Fixed& fixed) {
	if (this->getRawBits() > fixed.getRawBits()) {
		return (true);
	} else {
		return (false);
	}
}

bool	Fixed::operator <(const Fixed& fixed) {
	if (this->getRawBits() < fixed.getRawBits()) {
		return (true);
	} else {
		return (false);
	}	
}

bool	Fixed::operator >=(const Fixed& fixed) {
	if (this->getRawBits() >= fixed.getRawBits()) {
		return (true);
	} else {
		return (false);
	}	
}

bool	Fixed::operator <=(const Fixed& fixed) {
	if (this->getRawBits() <= fixed.getRawBits()) {
		return (true);
	} else {
		return (false);
	}	
}

bool	Fixed::operator ==(const Fixed& fixed) {
	if (this->getRawBits() == fixed.getRawBits()) {
		return (true);
	} else {
		return (false);
	}	
}

bool	Fixed::operator !=(const Fixed& fixed) {
	if (this->getRawBits() != fixed.getRawBits()) {
		return (true);
	} else {
		return (false);
	}	
}

Fixed	Fixed::operator +(const Fixed& fixed) {
	Fixed tmp = *this;
	return (tmp.toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator -(const Fixed& fixed) {
	Fixed tmp = *this;
	return (tmp.toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator *(const Fixed& fixed) {
	Fixed tmp = *this;
	return (tmp.toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator /(const Fixed& fixed) {
	Fixed tmp = *this;
	return (tmp.toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator ++() {
	this->fixed_++;
	return (*this);
}

Fixed	Fixed::operator --() {
	this->fixed_--;
	return (*this);
}

Fixed	Fixed::operator ++(int) {
	Fixed	tmp = *this;
	this->fixed_++;
	return (tmp);
}

Fixed	Fixed::operator --(int) {
	Fixed tmp = *this;
	this->fixed_--;
	return (tmp);
}

Fixed&	Fixed::min(Fixed& fixed_1, Fixed& fixed_2) {
	if (fixed_1 > fixed_2) {
		return (fixed_2);
	} else {
		return (fixed_1);
	}
}

Fixed&	Fixed::max(Fixed& fixed_1, Fixed& fixed_2) {
	if (fixed_1 < fixed_2) {
		return (fixed_2);
	} else {
		return (fixed_1);
	}
}

const Fixed&	Fixed::min(const Fixed& fixed_1, const Fixed& fixed_2) {
	if (fixed_1.getRawBits() > fixed_2.getRawBits()) {
		return (fixed_2);
	} else {
		return (fixed_1);
	}
}

const Fixed&	Fixed::max(const Fixed& fixed_1, const Fixed& fixed_2) {
	if (fixed_1.getRawBits() < fixed_2.getRawBits()) {
		return (fixed_2);
	} else {
		return (fixed_1);
	}
}
