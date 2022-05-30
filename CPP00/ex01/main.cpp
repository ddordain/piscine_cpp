/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:31:34 by ddordain          #+#    #+#             */
/*   Updated: 2022/05/30 18:10:47 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
    Phonebook   phonebook;
    string      userCommand;
   
    PRINT("================================");
    PRINT("=== THIS IS YOUR PHONEBOOK  ====");
    PRINT("================================");

   while (1) {
        std::getline(std::cin, userCommand);
        
        if (userCommand == "ADD") {phonebook.add();}
        else {break;}
   }
}
