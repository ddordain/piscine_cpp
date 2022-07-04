/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:13:56 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/04 16:44:21 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap("no_name", 100, 100, 30) {
	PRINT("+++ CALL CONSTRUCTOR FragTrap without name +++");
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	PRINT("+++ CALL CONSTRUCTOR FragTrap with  name +++");
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap() {
	if (this == &copy) {return ;}
	*this = copy;
	PRINT("+++ CALL COPY CONSTRUCTOR FragTrap +++");
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap() {
	PRINT("--- CALL DESTRUCTOR FragTrap --- " << this->getName());
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap&	FragTrap::operator =(const FragTrap& FragTrap) {
	if (this == &FragTrap) {return (*this);}
	this->name_ = FragTrap.name_;
	this->hitPoints_ = FragTrap.hitPoints_;
	this->energyPoints_ = FragTrap.energyPoints_;
	this->attackDamage_ = FragTrap.attackDamage_;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::attack(const std::string& target) {
	if (this->isAlive() == false) {
		PRINT(this->getName() << " cannot attack because he is dead");
	} else if (this->hasEnoughEnergy() == false) {
		PRINT(this->getName() << " cannot attack because he is out of energy");
	} else {
		PRINT(this->getName() << " has ULTED " << target << " causing " << this->getAttackDamage() << " TONS of damage");
		this->energyPoints_--;
	}
}

void	FragTrap::guardGate() {
	PRINT(this->getName() << " is entered in mode Gate Keeper, you shall not pass.");
}

void	FragTrap::realTarget(FragTrap target) {
	PRINT(target.getName() << " is targeted by " << this->getName() << " and had his attacked dmg reduced by 5");
	target.attackDamage_ -= 5;
	PRINT("hp: " << target.getHitPoints());
	PRINT("ep: " <<target.getEnergyPoints());
	PRINT("ad: " << target.getAttackDamage());
}

void	FragTrap::highFivesGuys() {
	PRINT("Gimme a High Five Brooo ! ");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
