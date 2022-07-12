/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:45:16 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/12 19:42:39 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("unamed", 25, 5, "notarget") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : Form() {
	*this = copy;
}


PresidentialPardonForm&	PresidentialPardonForm::operator= (const PresidentialPardonForm& form) {
	if (this == &form) {return (*this);}
	
	this->Form::operator =(form);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute (const Bureaucrat& executor) const {
	if (executor.getGrade() >= this->getGradeToExecute()) {
		throw Form::GradeTooLowException();
	} else {
		std::cout << target_ << " has been forgiven by President Zaphod Beeblebrox" << std::endl;
	}
}
