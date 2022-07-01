/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:38:13 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/01 15:30:09 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { // constructor 
	return ;
}

Zombie::Zombie(std::string name) {
    this->name_ = name;
}

Zombie::~Zombie() {
    PRINT(this->name_ << " is DEAD.... a second time ^^");
}

void	Zombie::annonce() {
    PRINT(this->name_ << ": BraiiiiiiinnnzzzZ...");
}

void	Zombie::setName(std::string name) {
	this->name_ = name;
}
