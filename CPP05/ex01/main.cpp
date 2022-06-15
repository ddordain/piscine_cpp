/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:56:54 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/15 16:34:28 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define PRINT(X) std::cout << X << std::endl;

int main() {
	Bureaucrat random;
	Bureaucrat piscineuxLaurent = Bureaucrat("Laurent");
	Bureaucrat studentCharles = Bureaucrat("Charles", 50);
	Bureaucrat tuteurElijah = Bureaucrat("Elijah", 10);
	Bureaucrat bossMathias = Bureaucrat("Mathias", 1);

	piscineuxLaurent.lowerGrade();
	PRINT(studentCharles.getGrade());
	PRINT(tuteurElijah.getName());
	bossMathias.higherGrade();
	return 0;
}
