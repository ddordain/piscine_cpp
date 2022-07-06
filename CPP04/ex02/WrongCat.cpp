/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:21:33 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/06 16:50:40 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	PRINT("+++ call of default WrongCat Constructor +++");
}

WrongCat::WrongCat(const WrongCat& WrongCat) : WrongAnimal() {
	PRINT("+++ call of copy WrongCat Constructor +++");
	if (this == &WrongCat) {return ;}
	*this = WrongCat; 
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat() {
	PRINT("--- call of WrongCat destructor ---");
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat&	WrongCat::operator =(const WrongCat& WrongCat) {
	if (this == &WrongCat) {return (*this);}
	this->type_ = WrongCat.type_;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongCat::makeSound() const {
	PRINT("WrongCat WrongCat WrongCat WrongCat 719");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	WrongCat::getType() const {
	return (this->type_);
}

/* ************************************************************************** */
