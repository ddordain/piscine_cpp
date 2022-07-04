/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:05:35 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/04 10:29:50 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cstdlib>
#include <string>

#define PRINT(X) std::cout << X << std::endl;

class Fixed {
	private:
	int					fixed_;
	static int const	bits_ = 8;

	public:
	Fixed(); // constructor
	~Fixed(); // destructor
	Fixed(const Fixed& copy); // copy constructor
	Fixed&	operator=(const Fixed& fixed); // = operator

	int		getRawBits() const;
};

#endif
