/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:17:33 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/05 18:57:43 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>
#include <cstdlib>

#define PRINT(X) std::cout << X << std::endl;

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const std::string&);
		WrongAnimal(const WrongAnimal&);
		virtual ~WrongAnimal();

		WrongAnimal& operator =(const WrongAnimal&);

		std::string	getType() const;

		void	makeSound() const;
	protected:
		std::string	type_;
};

#endif
