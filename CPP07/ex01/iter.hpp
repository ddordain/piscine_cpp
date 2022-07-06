/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:15:09 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/06 16:09:58 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstdlib>

template <typename T> void iter(const T* array, size_t size, void (*f)(const T&)) {
	for (size_t i = 0; i < size; i++) {
		f(array[i]);
	}
}

template <typename T> void	iter(T* array, size_t size, void (*f)(T&)) {
	for (size_t i = 0; i < size; i++) {
		f(array[i]);
	}
}

#endif
