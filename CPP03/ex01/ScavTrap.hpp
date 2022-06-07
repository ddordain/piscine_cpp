/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 00:24:44 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/08 00:31:25 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
	
		ScavTrap&	operator =(const ScavTrap&);

		void	attack();
		void	guardGate();
	private:

};

#endif