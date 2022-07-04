/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:13:44 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/04 11:07:22 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_(0) {
	PRINT("Default constructor called");
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

int Fixed::getRawBits() const {
	PRINT("getRawBits member function called");
	return (this->fixed_);
}

void	Fixed::setRawBits(const int fixed) {
	PRINT("setRawBits member function called");
	this->fixed_ = fixed;
}
