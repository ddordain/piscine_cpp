/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:06:18 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/06 12:51:31 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <cstdlib>

#define PRINT(X) std::cout << X << std::endl;

class Weapon {
	private:
	std::string	type_;
	

	public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	
	std::string	getType() const;
	void		setType(std::string type);
};

#endif
