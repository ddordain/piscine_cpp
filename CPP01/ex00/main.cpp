/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:07:38 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/03 12:19:04 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    //existing zombie//
    Zombie("Dominique");

	Zombie A("Zombie A who will die only at the end of the main");
	A.annonce();
	Zombie *Charles = newZombie("Charles Malloc");
	Charles->annonce();
	randomChump("Ned Stack");

	delete Charles;
}
