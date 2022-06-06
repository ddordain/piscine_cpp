/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:05:35 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/07 00:37:32 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class Fixed {
	private:
	int					fixed_;
	static const int	bits_;

	public:
	Fixed(); // constructor
	~Fixed(); // destructor
	Fixed(const Fixed&); // copy constructor
	Fixed&	operator=(const Fixed&); // = opetor

	int		getRawBits() const;
	void	setRawBits(const int&);
};

#endif