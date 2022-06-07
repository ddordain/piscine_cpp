/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:36:10 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/07 20:59:22 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

	ClapTrap clap("clap");
	ClapTrap trap("trap");

	trap.attack("clap");
	clap.takeDamage(trap.getAttackDamage());
	clap.beRepaired(9);
	clap.attack("trap");
	trap.takeDamage(5);
	trap.takeDamage(5);
	trap.takeDamage(5);
	return (0);
}