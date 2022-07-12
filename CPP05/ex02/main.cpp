/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:56:54 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/12 19:41:18 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define PRINT(X) std::cout << X << std::endl;

int main() {
	// Bureaucrat random;
	Bureaucrat piscineuxLaurent = Bureaucrat("Laurent");
	// Bureaucrat studentCharles = Bureaucrat("Charles", 50);
	// Bureaucrat tuteurElijah = Bureaucrat("Elijah", 10);
	Bureaucrat bossMathias = Bureaucrat("Mathias", 1);

	// piscineuxLaurent.lowerGrade();
	// PRINT(piscineuxLaurent.getGrade());
	// PRINT(tuteurElijah.getName());
	// bossMathias.higherGrade();
	PresidentialPardonForm macronForm;
	RobotomyRequestForm	robotForm("bender");
	ShrubberyCreationForm treeForm;

	try {
		macronForm.execute(bossMathias);
	}
	catch (Form::GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		macronForm.execute(piscineuxLaurent);
	}
	catch (Form::GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		robotForm.execute(piscineuxLaurent);
	}
	catch (Form::GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		robotForm.execute(bossMathias);
	}
	catch (Form::GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		robotForm.execute(bossMathias);
	}
	catch (Form::GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		treeForm.execute(bossMathias);
	}
	catch (Form::GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	return 0;
}
