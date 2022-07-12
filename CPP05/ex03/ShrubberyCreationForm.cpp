/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:29:46 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/12 19:44:24 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("unamed", 145, 137, "notarget") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shruberry Creation", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : Form() {
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator = (const ShrubberyCreationForm& form) {
	if (this == &form) {return (*this);}
	
	this->Form::operator=(form);
	return (*this);
}

void	ShrubberyCreationForm::execute (Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException();
	} else {
		std::ofstream ofs;

		ofs.open(target_.c_str());
		if (ofs.fail()) {
			std::cerr << "cannot create " << target_ << " file" << std::endl;
			return;
		} else {
		ofs << "    ccee88oo"          << std::endl
 			<< "C8O8O8Q8PoOb o8oo"         << std::endl
 			<< "dOB69QO8PdUOpugoO9bD"        << std::endl
			<< "CgggbU8OU qOp qOdoUOdcb"       << std::endl
			<< " 6OuU  /p u gcoUodpP"      << std::endl
      		<< "     |||||// /douUP"      << std::endl
       		<<"       |||||"     << std::endl
       		<<"       ||||| "   << std::endl
      		<<"       |||||"  << std::endl
      		<<"       |||||" << std::endl
  			<<" ..... |||||...." << std::endl;
		ofs.close();
		}
	}
}
