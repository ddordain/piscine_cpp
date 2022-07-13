/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 20:16:11 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/13 14:47:38 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define SIZE 20
#define X 14

int main() {
	std::list<int> listOfIntegers;
	int f[20];
	f[0] = 0;
	f[1] = 1;

	for (int i = 2; i < SIZE; i++) {
		f[i] = f[i-1] + f[i-2];
		std::cout << f[i] << std::endl;
		listOfIntegers.push_front(f[i]);
	}
	
	try {
		easyfind(listOfIntegers,X);
		// std::cout << "looking for :" <<  x << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
