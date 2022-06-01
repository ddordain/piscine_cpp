/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:31:34 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/01 12:05:58 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
	Phonebook   phonebook;
	std::string      userCommand;
   
	PRINT("================================");
	PRINT("=== THIS IS YOUR PHONEBOOK  ====");
	PRINT("================================");

   while (true) {
		std::getline(std::cin, userCommand);
		if (std::cin.eof()) {phonebook.exit();}
		if (userCommand == "ADD") {phonebook.add();}
		else if (userCommand == "SEARCH") {phonebook.search();}
		else if (userCommand == "EXIT") {phonebook.exit();}
		else {
			PRINT("=======================================================");
			PRINT("===      Please type ADD, SEARCH or EXIT            ===");
			PRINT("===      These are the only recognized commands     ===");
			PRINT("===      You can still play with your keyboard...   ===");
			PRINT("=======================================================");
		}
   }
   return (EXIT_SUCCESS);
}
