/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:05:35 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/07 16:27:50 by ddordain         ###   ########.fr       */
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

	public:
	Fixed(); // constructor
	~Fixed(); // destructor
	Fixed(const Fixed&); // copy constructor
	Fixed&	operator=(const Fixed&); // = operator

	Fixed(int const); // constructor int const
	Fixed(float const); // constructor float const

	int		getRawBits() const;

	float	toFloat() const;
	int		toInt() const;
};

std::ostream&	operator<<(std::ostream&, const Fixed&); // operator << (exterior because part of class ostream)

#endif