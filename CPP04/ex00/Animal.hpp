/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:43:49 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/13 18:31:06 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include <cstdlib>

#define PRINT(X) std::cout << X << std::endl;

class Animal {
	public:
		Animal();
		Animal(const std::string&);
		Animal(const Animal&);
		virtual ~Animal(); //undefined behavior if no virtual destructor for polymorphic class

		Animal& operator =(const Animal&);

		std::string	getType() const;

		virtual void	makeSound() const;
	protected:
		std::string	type_;
};

#endif