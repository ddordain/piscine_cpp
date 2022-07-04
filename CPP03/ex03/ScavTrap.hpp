/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 00:24:44 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/04 16:50:39 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		~ScavTrap();
	
		ScavTrap&	operator =(const ScavTrap&);

		void	attack(const std::string& target);
		void	guardGate();
		void	realTarget(ScavTrap);
	private:

};

#endif
