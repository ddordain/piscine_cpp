/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:03:11 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/08 14:44:41 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		~FragTrap();

		FragTrap&	operator =(const FragTrap&);

		void	attack(const std::string& target);
		void	guardGate();
		void	realTarget(FragTrap);
		void	highFivesGuys();
	private:
};

#endif
