/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:02:24 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/04 16:38:44 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

#define PRINT(X) std::cout << X << std::endl;

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hitPoint, int energyPoint, int attackDamage); //new for scavtrap call
		ClapTrap(const ClapTrap&);
		~ClapTrap();

		ClapTrap& operator =(const ClapTrap&);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		bool	isAlive();
		bool	hasEnoughEnergy();

		std::string	getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int		 	getAttackDamage() const;

	protected: //change from private to protected to let ScavTrap access it.
		std::string	name_;
		int			hitPoints_;
		int			energyPoints_;
		int			attackDamage_;
};

#endif
