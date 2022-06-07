/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:13:44 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/07 16:27:49 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_(0) {
	PRINT("Default constructor called");
}

Fixed::Fixed(int const integer) : fixed_( integer * (1 << Fixed::bits_)) {
	PRINT("Int constructor called");
}

Fixed::Fixed(float const decimal) : fixed_(roundf(decimal * (1 << Fixed::bits_))) {
	PRINT("Float constructor called");
}

Fixed::~Fixed() {
	PRINT("Destructor called");
}

Fixed::Fixed(const Fixed& copy) {
	PRINT("Copy constructor called");
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed& fixed) {
	PRINT("Copy assignment operator called");
	this->fixed_ = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const {
	PRINT("getRawBits member function called");
	return (this->fixed_);
}

int	Fixed::toInt() const {
	return (this->fixed_ / (1 << Fixed::bits_));
}

float Fixed::toFloat() const {
	return ((float)this->fixed_ / (1 << Fixed::bits_));
}

std::ostream&	operator <<(std::ostream& o, const Fixed& fixed) {
	o << fixed.toFloat();
	return o;
}
