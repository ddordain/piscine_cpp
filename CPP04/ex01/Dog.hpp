/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:23:57 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/14 11:06:01 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
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
		std::string	getIdeas(const int) const;
		void		setIdeas(int, const std::string&);
	private:
		std::string	type_;
		Brain*		brain_;
};

#endif