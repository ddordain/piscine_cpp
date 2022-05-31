/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:09:23 by ddordain          #+#    #+#             */
/*   Updated: 2022/05/31 12:23:24 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

// definition of constructor & destructor
Contact::Contact() {
    PRINT("++ contact");
    return ;
}

Contact::~Contact() {
    PRINT("-- contact");
    return ;
}

// definition of the getters
string	Contact::getFirstName() {
	return (this->firstName_);
}

string	Contact::getLastName() {
	return (this->lastName_);
}

string	Contact::getNickname() {
	return (this->nickname_);
}

string	Contact::getPhoneNumber() {
	return (this->phoneNumber_);
}

string	Contact::getDarkestSecret() {
	return (this->darkestSecret_);
}

// definition of the setters
void	Contact::setFirstName(string &str) {
	this->firstName_ = str;
}

void	Contact::setLastName(string str) {
	this->lastName_ = str;
}

void	Contact::setNickname(string str) {
	this->nickname_ = str;
}

void	Contact::setPhoneNumber(string str) {
	this->phoneNumber_ = str;
}

void	Contact::setDarkestSecret(string str) {
	this->darkestSecret_ = str;
}
