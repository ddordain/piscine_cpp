/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:38:25 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/01 14:31:15 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class   Contact {
	private:
	std::string  firstName_;
	std::string  lastName_;
	std::string  nickname_;
	std::string  phoneNumber_;
	std::string  darkestSecret_;

	public:
	Contact(); // constructor
	~Contact(); // destructor

	std::string  getFirstName() const;
	std::string  getLastName() const;
	std::string  getNickname() const;
	std::string  getPhoneNumber() const;
	std::string  getDarkestSecret() const;

	void	setFirstName(std::string &str);
	void	setLastName(std::string &str);
	void	setNickname(std::string &str);
	void	setPhoneNumber(std::string &str);
	void	setDarkestSecret(std::string &str);
};

#endif