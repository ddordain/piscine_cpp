/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:25:02 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/01 16:14:43 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// definition of constructor & destructor
Phonebook::Phonebook() {
	this->indexContact_ = 0;
    this->indexTable_ = 0;
	return ;
}

Phonebook::~Phonebook() {
	return ;
}

// definition of ADD function.
void Phonebook::add() {
	std::string  buffer;

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
    if (this->indexTable_ <= 7) {this->indexTable_++ ;}

}

void	Phonebook::search() {
    std::string buffer;
    int         number;

    if (this->indexTable_ == 0) {
        PRINT("The Phonebook is empty. You won't find anyone.");
    } else {
        PRINT("============================================");
        PRINT("==========     CONTACT LIST       ==========");
        PRINT("============================================");
        std::cout << "|" << std::setfill(' ') << std::setw(10) << "INDEX" << "|";
        std::cout << std::setfill(' ') << std::setw(10) << "FIRST NAME" << "|";
        std::cout << std::setfill(' ') << std::setw(10) << "LAST NAME" << "|";
        std::cout << std::setfill(' ') << std::setw(10) << "NICKNAME" << "|" << std::endl;
        PRINT("____________________________________________");

	    for (int i = 0; i < this->indexTable_ ; i++) {
            std::cout << "|" << std::setfill(' ') << std::setw(10) << i + 1 << "|";

            if (this->contactList_[i].getFirstName().length() <= 10) {
                std::cout << std::setfill(' ') << std::setw(10) << this->contactList_[i].getFirstName() << "|";
            } else {
                std::cout << std::setfill(' ') << std::setw(9) << this->contactList_[i].getFirstName().substr(0,9) << "." << "|";
            }

            if (this->contactList_[i].getLastName().length() <= 10) {
                std::cout << std::setfill(' ') << std::setw(10) << this->contactList_[i].getLastName() << "|";
            } else {
                std::cout << std::setfill(' ') << std::setw(9) << this->contactList_[i].getLastName().substr(0,9) << "." << "|";
            }

            if (this->contactList_[i].getNickname().length() <= 10) {
                std::cout << std::setfill(' ') << std::setw(10) << this->contactList_[i].getNickname() << "|" << std::endl;
            } else {
                std::cout << std::setfill(' ') << std::setw(9) << this->contactList_[i].getNickname().substr(0,9) << "." << "|" << std::endl;
            }
        }
        PRINT("============================================");
        
        while (true) {
            std::cout << "Which contact are you interested in ? (type EXIT to leave the contact list)" << std::endl;
            std::getline(std::cin, buffer);
            if (std::cin.eof()) {this->exit();}
            if (buffer == "EXIT") {break;}

            number = atoi(buffer.c_str());
            if (number > 0 && number <= 8) {
                PRINT("First Name :" << this->contactList_[number - 1].getFirstName());
                PRINT("Last Name :" << this->contactList_[number - 1].getLastName());
                PRINT("Nickame :" << this->contactList_[number - 1].getNickname());
                PRINT("Phone number :" << this->contactList_[number - 1].getPhoneNumber());
                PRINT("Darkest secret:" << this->contactList_[number - 1].getDarkestSecret());
            } else {
                PRINT("please type a value in the index");
            }
        }
    }
}

void	Phonebook::exit() {

    PRINT("================================");
	PRINT("===     HAVE A NICE DAY      ===");
	PRINT("================================");

	std::exit(EXIT_SUCCESS);
}