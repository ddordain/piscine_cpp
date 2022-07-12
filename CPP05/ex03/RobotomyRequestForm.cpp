/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:16:34 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/12 15:17:52 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("unamed", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string name) :	Form(name, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form() {
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator= (const RobotomyRequestForm& form)
{
	if (this == &form) {return (*this);}
	
	this->Form::operator=(form);
	return (*this);
}

void	RobotomyRequestForm::execute (Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException();
	} else {
		std::cout << "vvvvvvvvvrvrvrvrvrvr" << std::endl;
		if (std::rand() % 2 == 0) {
			std::cout << executor.getName() << " has been robotomized with 50% of success !" << std::endl;
		} else {
			std::cout << "the robotization of " << executor.getName() << " has failed !" << std::endl;
		}
	}
}
