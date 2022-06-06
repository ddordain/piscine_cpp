/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:24:00 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/06 13:38:18 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon_(weapon), name_(name) {
	return ;
}

HumanA::~HumanA() {
	return ;
}

void	HumanA::setWeapon(Weapon& weapon) {
	this->weapon_ = weapon;
}

void	HumanA::attack() {
	PRINT(this->name_ << " attacks with his " << this->weapon_.getType());
}
