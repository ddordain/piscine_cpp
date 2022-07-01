/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:33:59 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/01 15:30:12 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <string>

#define PRINT(X) std::cout << X << std::endl;

class Zombie {
	private:

	std::string name_;
	
	public:

	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	setName(std::string name);

	void	annonce();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif
