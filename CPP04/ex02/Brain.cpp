/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:47:52 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/06 16:49:21 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain() {
	PRINT("+++ call of Brain default constructior +++");
}

Brain::Brain(const Brain& brain) {
	if (this == &brain) {return ;}
	PRINT("+++ call of Brain copy constructor +++");
	*this = brain;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain() {
	PRINT("--- call of Brain destructor ---");
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain&	Brain::operator =(const Brain& brain) {
	if (this == &brain) {return (*this);}
	for (int i = 0; i < 100; i++) {
		this->ideas_[i] = brain.ideas_[i];
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Brain::getIdeas(const int index) const {
	if (index <= 0 || index > 100) {
		return ("error : min = 0, max = 100");
	} else {
		return (this->ideas_[index - 1]);
	}
}

void	Brain::setIdeas(int index, const std::string& idea) {
	if (index <= 0 || index > 100) {
		return ;
	} else {
		this->ideas_[index - 1] = idea;
	}
}

/* ************************************************************************** */
