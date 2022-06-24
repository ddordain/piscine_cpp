/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:12:48 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/24 15:38:10 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

#define PRINT(X) std::cout << X << std::endl;

int main() {
	Data data("QWERTYUIOP_1234567890");
	PRINT("data address : " << &data << " value : " << data.getData());
	uintptr_t ptr = serialize((Data*)&data);
	PRINT("ptr address serialized : " << ptr);
	PRINT("Data address deserialized : " << deserialize(ptr)  << ", value : " << deserialize(ptr)->getData());
}