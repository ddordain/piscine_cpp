/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:25:02 by ddordain          #+#    #+#             */
/*   Updated: 2022/05/31 12:24:43 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// definition of constructor & destructor
Phonebook::Phonebook() {
	this->indexContact_ = 0;
	return ;
}

Phonebook::~Phonebook() {
	return ;
}


// definition of ADD function.
void Phonebook::add() {
	string  buffer;

	if (this->indexContact_ == 8) {
		this->indexContact_ = 0;
	}

	PRINT("================================");
	PRINT("===  YOU JUST SELECTED ADD   ===");
	PRINT("================================");
	
	PRINT("First name :");
	std::getline(std::cin, buffer);
	if (std::cin.eof()) {this->exit();}
	this->contactList_[indexContact_].setFirstName(buffer);

	PRINT("Last name :");
	std::getline(std::cin, buffer);
	if (std::cin.eof()) {this->exit();}
	this->contactList_[indexContact_].setLastName(buffer);

	PRINT("Nickname :");
	std::getline(std::cin, buffer);
	if (std::cin.eof()) {this->exit();}
	this->contactList_[indexContact_].setNickname(buffer);

	PRINT("Phone number :");
	std::getline(std::cin, buffer);
	if (std::cin.eof()) {this->exit();}
	this->contactList_[indexContact_].setPhoneNumber(buffer);

	PRINT("Darkest secret :")
	std::getline(std::cin, buffer);
	if (std::cin.eof()) {this->exit();}
	this->contactList_[indexContact_].setDarkestSecret(buffer);
	PRINT("+++ CONTACT ADDED +++")

	this->indexContact_++;

}

void	Phonebook::search() {
	return ;
}

void	Phonebook::exit() {
	std::exit(EXIT_SUCCESS);
}