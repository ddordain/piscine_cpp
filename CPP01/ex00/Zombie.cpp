/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:38:13 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/03 12:10:35 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name_ = name;
}

Zombie::~Zombie() {
    PRINT(this->name_ << " is DEAD.... a second time ^^");
}

void Zombie::annonce() {
    PRINT(this->name_ << ": BraiiiiiiinnnzzzZ...");
}