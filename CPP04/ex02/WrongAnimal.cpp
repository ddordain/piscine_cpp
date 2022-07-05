/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:19:01 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/05 19:03:07 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() : type_("N/A") {
	PRINT("+++ call of default WrongAnimal Constructor +++");
}

WrongAnimal::WrongAnimal(const std::string& name) : type_(name) {
	PRINT("+++ call of default WrongAnimal Constructor +++");
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal) {
	PRINT("+++ call of copy WrongAnimal Constructor +++");
	if (this == &WrongAnimal) {return ;}
	*this = WrongAnimal; 
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal() {
	PRINT("--- call of WrongAnimal destructor ---");
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal&	WrongAnimal::operator =(const WrongAnimal& WrongAnimal) {
	this->type_ = WrongAnimal.type_;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongAnimal::makeSound() const {
	PRINT("Hello Darkness my old friend...");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	WrongAnimal::getType() const {
	return (this->type_);
}

/* ************************************************************************** */
