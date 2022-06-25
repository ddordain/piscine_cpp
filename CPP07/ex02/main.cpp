/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:22:26 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/25 13:32:25 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define SIZE static_cast<unsigned int>(100)
#define PRINT(X) std::cout << X << std::endl;


int	main() {
	srand(time(NULL));
	Array< int > int_array(100);
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
}