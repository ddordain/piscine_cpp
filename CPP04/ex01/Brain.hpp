/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:37:57 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/13 20:47:37 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {
	public:
		Brain();
		Brain(const Brain&);
		~Brain();

		Brain&	operator =(const Brain&);

		std::string	getIdeas() const;
	private:
		std::string	ideas_[100];
};

#endif