/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:20:21 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/05 18:53:28 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

#include <string>
#include <iostream>
#include <cstdlib>

#define PRINT(X) std::cout << X << std::endl;

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat&);
		~WrongCat();

		WrongCat& operator =(const WrongCat&);

		std::string	getType() const;

		void	makeSound() const;
	private:
		std::string	type_;
};

#endif
