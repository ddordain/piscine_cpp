/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:25:02 by ddordain          #+#    #+#             */
/*   Updated: 2022/05/30 18:27:46 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// definition of constructor & destructor
Phonebook::Phonebook() {
    this->_indexContact = 0;
    this->_numberContactAdded = 0;
    return ;
}

Phonebook::~Phonebook() {
    return ;
}

int Phonebook::add() {
    string  buffer;

    PRINT("================================");
    PRINT("=== YOU JUST SELECTED ADD 🐒 ===");
    PRINT("================================");
    PRINT("First name :");
    std::getline(std::cin, buffer);
    this->_ContactList[_indexContact].set_firstName(buffer);
    return (EXIT_SUCCESS);
}