/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:47:52 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/13 20:57:05 by ddordain         ###   ########.fr       */
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




/* ************************************************************************** */