/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 00:31:16 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/08 01:03:24 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap("no_name", 100, 50, 20) {
	PRINT("+++ CALL CONSTRUCTOR SCAVTRAP without name +++");
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	PRINT("+++ CALL CONSTRUCTOR SCAVTRAP with  name +++");
}

ScavTrap::ScavTrap(const ScavTrap& copy) {
	*this = copy;
	PRINT("+++ CALL COPY CONSTRUCTOR SCAVTRAP +++");
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap() {
	PRINT("--- CALL DESTRUCTOR SCAVTRAP ---");
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap&	ScavTrap::operator =(const ScavTrap& scavtrap) {
	this->name_ = scavtrap.name_;
	this->hitPoints_ = scavtrap.hitPoints_;
	this->energyPoints_ = scavtrap.energyPoints_;
	this->attackDamage_ = scavtrap.attackDamage_;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool	ClapTrap::isAlive() {
	if (this->getHitPoints() > 0) {
		return (true);
	} else {
		return (false);
	}
}

bool	ClapTrap::hasEnoughEnergy() {
	if (this->getEnergyPoints() >= 1) {
		return (true);
	} else {
		return (false);
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */