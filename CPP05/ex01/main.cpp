/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:56:54 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/16 16:57:22 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#define PRINT(X) std::cout << X << std::endl;

int main() {
	// Bureaucrat random;
	Bureaucrat piscineuxLaurent = Bureaucrat("Laurent");
	// Bureaucrat studentCharles = Bureaucrat("Charles", 50);
	// Bureaucrat tuteurElijah = Bureaucrat("Elijah", 10);
	Bureaucrat bossMathias = Bureaucrat("Mathias", 1);

	// piscineuxLaurent.lowerGrade();
	PRINT(piscineuxLaurent.getGrade());
	// PRINT(tuteurElijah.getName());
	// bossMathias.higherGrade();

	Form	superForm = Form("form 42", false, 10, 10);
	piscineuxLaurent.signForm(superForm);
	try {	
		superForm.beSigned(piscineuxLaurent);
	}
	catch (Form::GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	bossMathias.signForm(superForm);
	return 0;
}
