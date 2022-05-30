/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:38:32 by ddordain          #+#    #+#             */
/*   Updated: 2022/05/30 18:26:42 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Contact.hpp"

#define PRINT(X) std::cout << X << std::endl;

class   Phonebook {
	private:
	Contact	_ContactList[8];
	int		_index;
	int		_numberContactAdded;

	public:
	Phonebook(); // constructor
	~Phonebook(); // destructor

	int	add();
	int	search();
	int	exit();
};

#endif
