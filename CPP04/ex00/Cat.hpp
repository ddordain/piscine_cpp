/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:22:55 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/05 18:53:03 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

#include <string>
#include <iostream>
#include <cstdlib>

#define PRINT(X) std::cout << X << std::endl;

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat&);
		~Cat();

		Cat& operator =(const Cat&);

		std::string	getType() const;

		void	makeSound() const;
	private:
		std::string	type_;
};

#endif
