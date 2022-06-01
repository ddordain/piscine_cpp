/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:33:59 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/01 21:04:46 by ddordain         ###   ########.fr       */
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

	Zombie(std::string name);
	~Zombie();

	void	annonce();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif