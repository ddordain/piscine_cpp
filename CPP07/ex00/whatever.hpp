/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:40:21 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/24 20:10:32 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T> void swap (T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>const T min (const T& a, const T& b) {
	if (a < b) {return a;}
	else {return b;}
}

template <typename T>const T max (const T& a, const T& b) {
	if (a > b) {return a;}
	else {return b;}
}

#endif