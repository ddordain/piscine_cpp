/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:55:38 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/12 15:15:25 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern() {}

Intern::Intern(const Intern& copy) {
	*this = copy;
}

Intern::~Intern() {}

Intern&	Intern::operator =(__attribute__((unused)) const Intern& intern) {
	return *this;
}

Form*	Intern::makeForm(const std::string form, const std::string target)
{
	Form* 		forms[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	std::string targets[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	
	int		index = 0;
	bool	isForm = false;

	while (targets[index] != form && index < 3) {
		index++;
	}
	if (index != 3) {
		isForm = true;
	}
	
	for(int i = 0; i < 3; i++) {
		if (index != i) {
			delete forms[i];
		}
	}
	
	if (isForm == true) {
		std::cout << "Intern has created form " << form << std::endl;
		return (forms[index]);
	} else {
		std::cerr << "Intern didn't find form " << form << std::endl;
		return (NULL);
	}
}
