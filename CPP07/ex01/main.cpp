/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:35:47 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/24 21:07:57 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>void	negative(T a) {a = -a;}
template <typename T>void	bigebigo(T a) {
	int i = 0;
	while (a[i]) {
		if (a[i] == 'e') {a[i] = 'E';}
		if (a[i] == 'o') {a[i] = 'O';}
		i++;
	}
}

int main() {
	int tab[] = {0, 1, 2, 3, 4, 5, 6 , 7, 8, 9};
	std::string	str[2] = {"hello", "world"};

	for (int i = 0 ; i < 10; i++) {std::cout << tab[i] << std::endl;}

	::iter(tab, static_cast<size_t>(10), &negative);

	for (int i = 0 ; i < 10; i++) {std::cout << tab[i] << std::endl;}
	
	::iter(str, static_cast<size_t>(2), &bigebigo);
	for (int i = 0 ; i < 2; i++) {std::cout << str[i] << std::endl;}

	return 0;
}
