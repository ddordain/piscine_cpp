/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:09:23 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/01 15:53:03 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

// definition of constructor & destructor
Contact::Contact() {
	return ;
}

Contact::~Contact() {
	return ;
}

// definition of the getters
std::string	Contact::getFirstName() const {
	return (this->firstName_);
}

std::string	Contact::getLastName() const {
	return (this->lastName_);
}

std::string	Contact::getNickname() const {
	return (this->nickname_);
}

std::string	Contact::getPhoneNumber() const {
	return (this->phoneNumber_);
}

std::string	Contact::getDarkestSecret() const {
	return (this->darkestSecret_);
}

// definition of the setters
void	Contact::setFirstName(std::string &str) {
	this->firstName_ = str;
}

void	Contact::setLastName(std::string &str) {
	this->lastName_ = str;
}

void	Contact::setNickname(std::string &str) {
	this->nickname_ = str;
}

void	Contact::setPhoneNumber(std::string &str) {
	this->phoneNumber_ = str;
}

void	Contact::setDarkestSecret(std::string &str) {
	this->darkestSecret_ = str;
}
