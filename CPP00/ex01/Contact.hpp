/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:38:25 by ddordain          #+#    #+#             */
/*   Updated: 2022/05/31 12:23:01 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

typedef std::string string;

class   Contact {
	private:
	string  firstName_;
	string  lastName_;
	string  nickname_;
	string  phoneNumber_;
	string  darkestSecret_;

	public:
	Contact(); // constructor
	~Contact(); // destructor

	string  getFirstName();
	string  getLastName();
	string  getNickname();
	string  getPhoneNumber();
	string  getDarkestSecret();

	void	setFirstName(string &str);
	void	setLastName(string str);
	void	setNickname(string str);
	void	setPhoneNumber(string str);
	void	setDarkestSecret(string str);
};

#endif