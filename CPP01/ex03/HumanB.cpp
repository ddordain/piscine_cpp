/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:45:12 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/06 13:23:22 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name_ = name;
}

HumanB::~HumanB() {
	return ;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon_ = &weapon;
}

void	HumanB::attack() {
	PRINT(this->name_ << " attacks with his " << this->weapon_->getType());
}
