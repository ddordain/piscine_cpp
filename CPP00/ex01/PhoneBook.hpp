/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:38:32 by ddordain          #+#    #+#             */
/*   Updated: 2022/05/31 12:24:06 by ddordain         ###   ########.fr       */
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
	Contact	contactList_[8];
	int		indexContact_;

	public:
	Phonebook(); // constructor
	~Phonebook(); // destructor

	void	add();
	void	search();
	void	exit();
};

#endif
