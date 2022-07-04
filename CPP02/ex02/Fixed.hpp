/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:05:35 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/04 11:08:30 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

#define PRINT(X) std::cout << X << std::endl;

class Fixed {
	private:
	int					fixed_;
 	static int const	bits_ = 8;

// CONSTRUCTOR & DESTRUCTOR
	public: 
	Fixed(); // constructor
	~Fixed(); // destructor
	Fixed(const Fixed&); // copy constructor
	Fixed(int const); // constructor int const
	Fixed(float const); // constructor float const

// ORERATOR
	Fixed&	operator =(const Fixed&);
	bool	operator >(const Fixed&);
	bool	operator <(const Fixed&);
	bool	operator >=(const Fixed&);
	bool	operator <=(const Fixed&);
	bool	operator ==(const Fixed&);
	bool	operator !=(const Fixed&);

	Fixed	operator +(const Fixed&);
	Fixed	operator -(const Fixed&);
	Fixed	operator *(const Fixed&);
	Fixed	operator /(const Fixed&);

	Fixed	operator ++(int); // postfix // general rule : add by convention an unused parameter to indicate it to the compilator
	Fixed	operator ++(); // prefix
	Fixed	operator --(int); //postfix
	Fixed	operator --(); // prefix

	int		getRawBits() const;
	void	setRawBits(const int);

	float	toFloat() const;
	int		toInt() const;

	Fixed&	min(Fixed&, Fixed&);
	Fixed&	max(Fixed&, Fixed&);

	static const Fixed&	min(const Fixed&, const Fixed&);
	static const Fixed&	max(const Fixed&, const Fixed&);
};

std::ostream&	operator<<(std::ostream&, const Fixed&); // operator << (exterior because part of class ostream)

#endif
