/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:23:57 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/05 18:53:09 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

#include <string>
#include <iostream>
#include <cstdlib>

#define PRINT(X) std::cout << X << std::endl;

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog&);
		~Dog();

		Dog& operator =(const Dog&);

		std::string	getType() const;

		void	makeSound() const;
	private:
		std::string	type_;
};

#endif
