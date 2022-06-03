/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:07:38 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/03 12:43:43 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie* theAssembly = zombieHorde(10, "TheAssembly");

	for (int i = 0; i < 10; i++) {theAssembly[i].annonce();}
	delete [] theAssembly;
}
