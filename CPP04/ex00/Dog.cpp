/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:25:01 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/06 16:51:24 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("dog") {
	PRINT("+++ call of default Dog Constructor +++");
}

Dog::Dog(const Dog& dog) : Animal() {
	PRINT("+++ call of copy Dog Constructor +++");
	*this = dog; 
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog() {
	PRINT("--- call of Dog destructor ---");
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog&	Dog::operator =(const Dog& dog) {
	if (this == &dog) {return (*this);}
	this->type_ = dog.type_;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const {
	PRINT("SCOOBIDOUBIDOU");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Dog::getType() const {
	return (this->type_);
}

/* ************************************************************************** */
