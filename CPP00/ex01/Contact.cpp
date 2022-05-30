/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:09:23 by ddordain          #+#    #+#             */
/*   Updated: 2022/05/27 16:21:24 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// definition of the getters
string	Contact::get_firstName() {
	return (this->_firstName);
}

string	Contact::get_lastName() {
	return (this->_lastName);
}

string	Contact::get_nickname() {
	return (this->_nickname);
}

string	Contact::get_phoneNumber() {
	return (this->_phoneNumber);
}

string	Contact::get_darkestSecret() {
	return (this->_darkestSecret);
}

// definition of the setters
void	Contact::set_firstName(string str) {
	this->_firstName = str;
}

void	Contact::set_lastName(string str) {
	this->_lastName = str;
}

void	Contact::set_nickname(string str) {
	this->_nickname = str;
}

void	Contact::set_phoneNumber(string str) {
	this->_phoneNumber = str;
}

void	Contact::set_darkestSecret(string str) {
	this->_darkestSecret = str;
}
