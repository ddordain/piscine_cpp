/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:22:49 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/03 12:51:50 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++) {horde[i].setName(name);}
	return (horde);
}
