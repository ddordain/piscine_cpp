/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:48:20 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/04 16:50:17 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap (void) : ClapTrap("no_name_clap_name", 100, 50, 30), ScavTrap(), FragTrap(), name_("no_name") {
	PRINT("+++Call constructor of DIAMOND");
}

DiamondTrap::DiamondTrap (const std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30), ScavTrap(), FragTrap(), name_(name) {
	PRINT("+++call constructor of DIAMOND with NAME :  " << this->getName());
}

DiamondTrap::DiamondTrap (const DiamondTrap& copy) : ClapTrap(), ScavTrap(), FragTrap() {
	*this = copy;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap() {
	PRINT("--- CALL DESTRUCTOR of DIAMOND---" << this->name_);
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap&	DiamondTrap::operator =(const DiamondTrap& diamond) {
	if (this == &diamond) {return (*this);}
	this->name_ = diamond.getName();
	this->ClapTrap::name_ = diamond.ClapTrap::name_;
	this->hitPoints_ = diamond.getHitPoints();
	this->energyPoints_ = diamond.getEnergyPoints();
	this->attackDamage_ = diamond.getAttackDamage();
	return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	DiamondTrap::whoAmI() const {
	PRINT("Name :" << this->name_ << " ClapTrap name : "<< this->ClapTrap::name_);
}

void	DiamondTrap::attack (const std::string& target) {
	this->ScavTrap::attack (target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
