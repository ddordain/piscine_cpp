/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:22:26 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/25 15:54:49 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define SIZE static_cast<unsigned int>(100)
#define PRINT(X) std::cout << X << std::endl;


int	main() {
	srand(time(NULL));
	Array<int> int_array(100);
	for (unsigned int i = 0; i < SIZE; i++) {
		int_array.setValue(i, rand());
	}
	int_array.getArray();

	Array <std::string> string_array(5);
	string_array.setValue(0, "hello");
	string_array.setValue(1, "world");
	string_array.setValue(2, "i am");
	string_array.setValue(3, "a");
	string_array.setValue(4, "robot");
	string_array.getArray();

	// Array<int> int_array2(100);
	// int_array2 = int_array;

	Array<int>	 *ptr_int_array = new Array<int>(10);
	for (unsigned int i = 0; i < SIZE; i++) {
		ptr_int_array->setValue(i, rand());
	}
	ptr_int_array->getArray();
	Array<int>	 *ptr_int_array2;
	ptr_int_array2 = ptr_int_array;
	ptr_int_array2->getArray();
	try {
		std::cout << (*ptr_int_array2)[static_cast<unsigned int>(2)] << std::endl;
	}
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	try {
		(*ptr_int_array2)[static_cast<unsigned int>(1000)];
	}
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	delete ptr_int_array;
}