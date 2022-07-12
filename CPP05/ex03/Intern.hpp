/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:53:59 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/12 15:11:54 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern&);
		virtual ~Intern();

		Intern& operator =(const Intern&);

		Form*	makeForm(std::string, std::string);
};

#endif
