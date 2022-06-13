/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:25:13 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/13 17:48:51 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("cat") {
	PRINT("+++ call of default Cat Constructor +++");
}

Cat::Cat(const Cat& cat) : Animal() {
	PRINT("+++ call of copy Cat Constructor +++");
	if (this == &cat) {return ;}
	*this = cat; 
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() {
	PRINT("--- call of Cat destructor ---");
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat&	Cat::operator =(const Cat& cat) {
	this->type_ = cat.type_;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound() const {
	PRINT("Cat cat cat cat 719");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Cat::getType() const {
	return (this->type_);
}

/* ************************************************************************** */