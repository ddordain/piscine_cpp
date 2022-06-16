/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:45:09 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/16 18:53:25 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form();
		Form(std::string, bool, int, int);
		Form(const Form&);
		~Form();

		Form& operator = (const Form&);

		void	beSigned(const Bureaucrat&);

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw(); 
		};

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw(); 
		};
	private:
		const std::string	name_;
		bool				isSigned_;
		int					gradeToSign_;
		int					gradeToExecute_;
};

#endif