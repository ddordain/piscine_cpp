/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:37:45 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/16 18:53:33 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string);
		RobotomyRequestForm(const RobotomyRequestForm&);
		~RobotomyRequestForm();

		RobotomyRequestForm& 	operator =(const RobotomyRequestForm&);

		void	execute(const Bureaucrat& executor) const;
};

#endif