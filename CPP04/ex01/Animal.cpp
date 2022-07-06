/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:51:16 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/06 16:46:42 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type_("N/A") {
	PRINT("+++ call of default Animal Constructor +++");
}

Animal::Animal(const std::string& name) : type_(name) {
	PRINT("+++ call of default Animal Constructor +++");
}

Animal::Animal(const Animal& animal) {
	PRINT("+++ call of copy Animal Constructor +++");
	*this = animal; 
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal() {
	PRINT("--- call of Animal destructor ---");
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal&	Animal::operator =(const Animal& animal) {
	if (this == &animal) {return (*this);}
	this->type_ = animal.type_;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound() const {
	PRINT("Hello Darkness my old friend...");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Animal::getType() const {
	return (this->type_);
}

Brain*	Animal::getBrain() const {
	return (NULL);
}

/* ************************************************************************** */
