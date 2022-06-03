/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:56:27 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/03 13:19:15 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstdlib>
#include <iostream>
#include <iomanip>

#define PRINT(X) std::cout  << X << std::endl;

int	main() {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	PRINT("the string : " << str );
	PRINT("the PTR : " << stringPTR);
	PRINT("the REF : " << stringREF);


	PRINT("the string address : "<< &str);
	PRINT("the PTR (the value pointed):" << *stringPTR);
	PRINT("the REF address : " << &stringREF);
}
