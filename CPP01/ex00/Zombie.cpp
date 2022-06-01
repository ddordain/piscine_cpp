/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:38:13 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/01 21:07:19 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name_ = name;
    this->annonce();
}

Zombie::~Zombie() {
    PRINT(this->name_ << " is DEAD.... a second time ^^");
}

void Zombie::annonce() {
    PRINT(this->name_ << ": BraiiiiiiinnnzzzZ...");
}