/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:21:14 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/24 00:33:52 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


int main(int ac, char **av){
	// PRINT(std::numeric_limits<float>::max());
	// PRINT(__FLT_MAX__);
	// PRINT(-__FLT_MAX__);
	// PRINT(__FLT_MIN__);
	// PRINT(std::numeric_limits<double>::max());

	std::string		str;
	Convert			*c;

	if (ac != 2)
	{
		std::cerr << "ERROR" << std::endl;
		return (1);
	}

	str = av[1];
	c = new Convert(str);
	c->print();
	std::cout << c->overflowInt_ << std::endl;
	delete c;

	return (0);
}