/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:03:40 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/06 23:04:28 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	return ;
}

Harl::~Harl() {
	return ;
}

void	Harl::debug_() {
	PRINT("I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!");
	return ;
}

void	Harl::info_() {
	PRINT("I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!");
	return ;
}

void	Harl::warning_() {
	PRINT("I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.");
	return ;
}

void	Harl::error_() {
	PRINT("This is unacceptable! I want to speak to the manager now.");
	return ;
}

void	Harl::complain(std::string level) {
	std::string	stringTable[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// void	(Harl::*f[4]) (void) = {&Harl::debug_, &Harl::info_, &Harl::warning_, &Harl::error_};

	for (int i = 0; i < 4; i++) {

	}
}

void	Harl::filter(int i) {
	switch (i) {

		case 0:
			this->debug_();
			break;
		case 1:
			this->info_();
			break;
		case 2:
			this->warning_();
			break;
		case 3:
			this->error_();
			break;
	}
}