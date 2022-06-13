/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:41:54 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/08 18:32:26 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string		name_;
	public:
		DiamondTrap (void);
		DiamondTrap (const DiamondTrap& copy);
		DiamondTrap (const std::string);
		~DiamondTrap (void);

		DiamondTrap& operator =(const DiamondTrap&);

		void whoAmI (void) const;
		void attack (const std::string& target);
};


#endif