/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:22:55 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/14 11:13:43 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
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
		std::string	getIdeas(const int) const;
		void		setIdeas(int, const std::string&);
	private:
		std::string	type_;
		Brain*		brain_;
};

#endif