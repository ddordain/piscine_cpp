/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:01:30 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/15 16:50:12 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string);
		Bureaucrat(const std::string, int);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat();

		Bureaucrat&	operator = (const Bureaucrat&);

		std::string	getName() const;
		int			getGrade() const;

		void		setName(const std::string&);
		void		setGrade(int);

		void		higherGrade();
		void		lowerGrade();

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

	private:
		const std::string	name_;
		int					grade_;
};

std::iostream&	operator <<(std::iostream &o, const Bureaucrat& bureaucrat);

#endif
