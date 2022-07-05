/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:37:57 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/05 18:54:27 by ddordain         ###   ########.fr       */
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

		std::string	getIdeas(const int) const;
		void		setIdeas(int, const std::string&);
	private:
		std::string	ideas_[100];
};

#endif
