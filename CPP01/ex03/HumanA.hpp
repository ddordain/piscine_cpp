/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:12:31 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/06 12:54:40 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {
	private:
	Weapon&		weapon_;
	std::string	name_;

	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	setWeapon(Weapon& weapon);
	void	attack();
};
