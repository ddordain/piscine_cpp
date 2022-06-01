/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:38:32 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/01 14:12:57 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "Contact.hpp"

#define PRINT(X) std::cout << X << std::endl;

class   Phonebook {
	private:
	Contact	contactList_[8];
	int		indexContact_;
    int     indexTable_;

	public:
	Phonebook(); // constructor
	~Phonebook(); // destructor

	void	add();
	void	search();
	void	exit();
};

#endif
