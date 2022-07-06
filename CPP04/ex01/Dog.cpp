/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:25:01 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/06 19:07:16 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("dog") {
	PRINT("+++ call of default Dog Constructor +++");
	this->brain_ = new Brain;
}

Dog::Dog(const Dog& dog) : Animal() {
	PRINT("+++ call of copy Dog Constructor +++");
	if (this == &dog) {return ;}
	this->brain_ = new Brain(*(dog.brain_));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog() {
	PRINT("--- call of Dog destructor ---");
	delete this->brain_;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog&	Dog::operator =(const Dog& dog) {
	if (this == &dog) {return (*this);}
	this->type_ = dog.type_;
	delete this->brain_;
	this->brain_ = new Brain(*(dog.brain_));
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

Brain*	Dog::getBrain() const {
	return (this->brain_);
}

std::string	Dog::getIdeas(const int index) const {
	return (this->brain_->getIdeas(index));
}

void	Dog::setIdeas(int index, const std::string& idea) {
	this->brain_->setIdeas(index, idea);
}

/* ************************************************************************** */
