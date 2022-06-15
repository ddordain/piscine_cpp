/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:45:09 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/15 17:28:32 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Form {
	public:
		Form();
		Form(std::string, bool, int, int);
		Form(const Form&);
		~Form();

		Form& operator = (const Form&);
	private:
		const std::string	name_;
		bool				isSigned_;
		int					gradeToSign_;
		int					gradeToExecute_;

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw(); 
		};

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw(); 
		};
}

#endif