/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:25:13 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/05 18:54:31 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("cat") {
	PRINT("+++ call of default Cat Constructor +++");
	this->brain_ = new Brain;
}

Cat::Cat(const Cat& cat) : Animal() {
	PRINT("+++ call of copy Cat Constructor +++");
	if (this == &cat) {return ;}
	this->brain_ = new Brain;
	*this = cat;
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() {
	PRINT("--- call of Cat destructor ---");
	delete this->brain_;
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

Brain*	Cat::getBrain() const {
	return (this->brain_);
}

std::string	Cat::getIdeas(const int index) const {
	return (this->brain_->getIdeas(index));
}

void	Cat::setIdeas(int index, const std::string& idea) {
	this->brain_->setIdeas(index, idea);
}

/* ************************************************************************** */
