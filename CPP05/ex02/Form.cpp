/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:25:03 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/12 15:11:04 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name_(name) {
	try {
		if (gradeToSign < 1) {
			throw Form::GradeTooHighException();
		} else if (gradeToSign > 150) {
			throw Form::GradeTooLowException();
		} else {
			this->gradeToSign_ = gradeToSign;
		}
	}
	catch (GradeTooHighException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	catch (GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		if (gradeToExecute < 1) {
			throw Form::GradeTooHighException();
		} else if (gradeToExecute > 150) {
			throw Form::GradeTooLowException();
		} else {
			this->gradeToExecute_ = gradeToExecute;
		}
	}
	catch (GradeTooHighException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	catch (GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
}

Form::Form(std::string name, bool is_signed, int gradeToSign, int gradeToExecute) : name_(name), isSigned_(is_signed) {
	try {
		if (gradeToSign < 1) {
			throw Form::GradeTooHighException();
		} else if (gradeToSign > 150) {
			throw Form::GradeTooLowException();
		} else {
			this->gradeToSign_ = gradeToSign;
		}
	}
	catch (GradeTooHighException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	catch (GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		if (gradeToExecute < 1) {
			throw Form::GradeTooHighException();
		} else if (gradeToExecute > 150) {
			throw Form::GradeTooLowException();
		} else {
			this->gradeToExecute_ = gradeToExecute;
		}
	}
	catch (GradeTooHighException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	catch (GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
}

Form::Form(const Form& copy) {
	*this = copy;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form&	Form::operator = (const Form& form) {
	if (this == &form) {return (*this);}
	
	std::string*	ptrName = (std::string*)&this->name_;
	*ptrName = form.name_;
	this->isSigned_ = form.isSigned_;
	this->gradeToSign_ = form.gradeToSign_;
	this->gradeToExecute_ = form.gradeToExecute_;
	return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char*	Form::GradeTooHighException::what() const throw() {
	return ("grade is too high");
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("grade is too low");
}

void	Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() >= this->getGradeToSign()) {
		throw Form::GradeTooLowException();
	} else {
		this->isSigned_ = true;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Form::getName() const {
	return (this->name_);
}

bool	Form::getIsSigned() const {
	return (this->isSigned_);
}

int	Form::getGradeToSign() const {
	return (this->gradeToSign_);
}

int	Form::getGradeToExecute() const {
	return (this->gradeToExecute_);
}

/* ************************************************************************** */

std::ostream&	operator <<(std::ostream& o, const Form& form) {
	o	<< "form name : "
		<< form.getName()
		<< " is signed : "
		<< form.getIsSigned()
		<< "grade to sign : "
		<< form.getGradeToSign()
		<< "grade to execute : "
		<< form.getGradeToExecute()
		<< std::endl;
	return (o);
}
