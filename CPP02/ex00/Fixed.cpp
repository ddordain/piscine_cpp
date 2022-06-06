/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:13:44 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/07 00:38:22 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& copy) {*this = copy;}

Fixed&	Fixed::operator=(const Fixed& fixed) {
	this->fixed_ = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const {
	return (this->fixed_);
}

void	Fixed::setRawBits(const int& fixed) {
	this->fixed_ = fixed;
}
