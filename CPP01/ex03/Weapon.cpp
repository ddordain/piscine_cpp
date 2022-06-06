/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:17:53 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/06 12:53:57 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	return ;
}

Weapon::Weapon(std::string type) {
	this->type_ = type;
}

Weapon::~Weapon() {
	return ;
}

std::string Weapon::getType() const {
	return (this->type_);
}

void	Weapon::setType(std::string type) {
	this->type_ = type;
}
