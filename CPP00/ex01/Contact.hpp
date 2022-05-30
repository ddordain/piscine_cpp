/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:38:25 by ddordain          #+#    #+#             */
/*   Updated: 2022/05/30 18:20:15 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

typedef std::string string;

class   Contact {
	private:
	string  _firstName;
	string  _lastName;
	string  _nickname;
	string  _phoneNumber;
	string  _darkestSecret;

	public:
	Contact(); // constructor
	~Contact(); // destructor

	string  get_firstName();
	string  get_lastName();
	string  get_nickname();
	string  get_phoneNumber();
	string  get_darkestSecret();

	void	set_firstName(string &str);
	void	set_lastName(string str);
	void	set_nickname(string str);
	void	set_phoneNumber(string str);
	void	set_darkestSecret(string str);
};

#endif