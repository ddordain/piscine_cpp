/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:02:20 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/07 20:57:08 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

//without name
ClapTrap::ClapTrap() : name_("a_horse_with_no_name"), hitPoints_(10), energyPoints_(10), attackDamage_(0) {
	PRINT ("+++ call default constructor +++");
}

//with name as parameter
ClapTrap::ClapTrap(std::string name) : name_(name), hitPoints_(10), energyPoints_(10), attackDamage_(0) {
	PRINT("+++ call name constructor +++");
}

//copy constructor
ClapTrap::ClapTrap(const ClapTrap& copy) {
	*this = copy;
	PRINT("+++ call copy constructor +++");
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap() {
	PRINT("--- call destructor ---")
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap&	ClapTrap::operator =(const ClapTrap& claptrap) {
	this->name_ = claptrap.name_;
	this->hitPoints_ = claptrap.hitPoints_;
	this->energyPoints_ = claptrap.energyPoints_;
	this->attackDamage_ = claptrap.attackDamage_;
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

void	ClapTrap::attack(const std::string& target) {
	if (this->isAlive() == false) {
		PRINT(this->name_ << " cannot attack because he is dead");
	} else if (this->hasEnoughEnergy() == false) {
		PRINT(this->name_ << " cannot attack because he is out of energy");
	} else {
		PRINT(this->name_ << " has attacked " << target << " causing " << this->getAttackDamage() << " points of damage");
		this->energyPoints_--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->isAlive() == false) {
		PRINT(this->name_ << "is already dead, leave him alone...");
	} else {
		this->hitPoints_ -= (int)amount;
		PRINT(this->name_ << " has taken " << amount << " points of damage ");
		if (this->isAlive() == false) {
			this->hitPoints_ = 0;
			PRINT(this->name_ << " just died of his wounds... RIP");
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->isAlive() == false ) {
		PRINT(this->name_ << " cannot be repaired... WHY ? Because he is DEAD");
	} else if (this->hasEnoughEnergy() == false) {
		PRINT(this->name_ << " cannot be repaired because he is out of energy");
	} else {
		this->hitPoints_ += amount;
		PRINT(this->name_ << " was repaired by an amount of " << amount);
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ClapTrap::getName() const {return (this->name_);}
int			ClapTrap::getHitPoints() const {return (this->hitPoints_);}
int			ClapTrap::getEnergyPoints() const  {return (this->energyPoints_);}
int			ClapTrap::getAttackDamage() const {return (this->attackDamage_);}

/* ************************************************************************** */