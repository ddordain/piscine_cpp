/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 00:31:16 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/08 14:39:12 by ddordain         ###   ########.fr       */
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

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap() {
	if (this == &copy) {return ;}
	*this = copy;
	PRINT("+++ CALL COPY CONSTRUCTOR SCAVTRAP +++");
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap() {
	PRINT("--- CALL DESTRUCTOR SCAVTRAP --- " << this->getName());
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

void	ScavTrap::attack(const std::string& target) {
	if (this->isAlive() == false) {
		PRINT(this->getName() << " cannot attack because he is dead");
	} else if (this->hasEnoughEnergy() == false) {
		PRINT(this->getName() << " cannot attack because he is out of energy");
	} else {
		PRINT(this->getName() << " has ULTED " << target << " causing " << this->getAttackDamage() << " TONS of damage");
		this->energyPoints_--;
	}
}

void	ScavTrap::guardGate() {
	PRINT(this->getName() << " is entered in mode Gate Keeper, you shall not pass.");
}

void	ScavTrap::realTarget(ScavTrap target) {
	PRINT(target.getName() << " is targeted by " << this->getName() << " and had his attacked dmg reduced by 5");
	target.attackDamage_ -= 5;
	PRINT("hp: " << target.getHitPoints());
	PRINT("ep: " <<target.getEnergyPoints());
	PRINT("ad: " << target.getAttackDamage());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */