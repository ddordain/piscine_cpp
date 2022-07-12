/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:07:37 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/12 15:11:36 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() {}
Bureaucrat::Bureaucrat(std::string name) : name_(name), grade_(150) {}
Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name) {
	try {
		if (grade < 1) {
			throw Bureaucrat::GradeTooHighException();
		} else if (grade > 150) {
			throw Bureaucrat::GradeTooLowException();
		} else {
			this->grade_ = grade;
		}
	}
	catch (GradeTooHighException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	catch (GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
}
Bureaucrat::Bureaucrat(const Bureaucrat& copy) {*this = copy;}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat&	Bureaucrat::operator = (const Bureaucrat& bureaucrat) {
	if (this == &bureaucrat) {return *this;}
	
	std::string* ptrString = (std::string*)&this->name_;
	*ptrString = bureaucrat.name_;
	this->grade_ = bureaucrat.grade_;
	return (*this);
}



/*
** --------------------------------- METHODS ----------------------------------
*/

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade is too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade is too low");
}

void	Bureaucrat::higherGrade() {
	try {
		if (this->grade_ == 1) {
			throw Bureaucrat::GradeTooHighException();
		} else {
			this->grade_--;
		}
	}
	catch (GradeTooHighException& exception) {
		std::cerr << exception.what() << std::endl;
	}
}

void	Bureaucrat::lowerGrade() {
	try {
		if (this->grade_ == 150) {
			throw Bureaucrat::GradeTooLowException();
		} else {
			this->grade_++;
		}
	}
	catch (GradeTooLowException& exception) {
		std::cerr << exception.what() << std::endl;
	}
}


void	Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout 	<< this->name_
					<< " signed "
					<< form.getName()
					<< std::endl;
	}
	catch (std::exception &exception) {
		std::cerr 	<< this->name_
					<< " could not sign "
					<< form.getName()
					<< " because "
					<< exception.what()
					<< std::endl; 
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Bureaucrat::getName() const {
	return (this->name_);
}

int	Bureaucrat::getGrade() const {
	return (this->grade_);
}

void	Bureaucrat::setName(const std::string& name) {
	std::string* ptrName =  (std::string*)&this->name_;
	*ptrName = name;
}

void	Bureaucrat::setGrade(int grade) {
	try {
		if (grade < 1) {
			throw Bureaucrat::GradeTooHighException();
		} else if (grade > 150) {
			throw Bureaucrat::GradeTooLowException();
		} else {
			this->grade_ = grade;
		}
	}
	catch (GradeTooHighException &exception) {
		std::cerr << exception.what() << std::endl;
	}
	catch (GradeTooLowException &exception) {
		std::cerr << exception.what() << std::endl;
	}
}

/* ************************************************************************** */

std::ostream&	operator <<(std::ostream& o, const Bureaucrat& bureaucrat) {
	o << "Bureaucrat " << bureaucrat.getName() << " is rank : " << bureaucrat.getGrade() << std::endl;
	return (o);
}
