/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:16:34 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/12 19:39:24 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("unamed", 72, 45, "notarget") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :	Form("RobotomyRequestForm", 72, 45, target) {}

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
			std::cout << target_ << " has been robotomized with 50% of success !" << std::endl;
		} else {
			std::cout << "the robotization of " << target_ << " has failed !" << std::endl;
		}
	}
}
