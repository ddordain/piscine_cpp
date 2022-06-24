/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:50:36 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/24 17:21:57 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>
#include <cstddef>

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate() {
	std::srand(std::time(NULL));

	int randNum = (rand() % 3) + 1;

	if(randNum == 1)
		return (new A);
	if(randNum == 2)
		return (new B);
	if(randNum == 3)
		return (new C);
	return (new A);
}
void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	Base	tmp;
	try
	{
		tmp = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &err) {}
	try
	{
		tmp = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &err) {}
	try
	{
		tmp = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &err) {}
}

// void	identify(Base &p)
// {
// 	if (dynamic_cast<A&>(p))
// 		std::cout << "A" << std::endl;
// 	else if (dynamic_cast<B&>(p))
// 		std::cout << "B" << std::endl;
// 	else if (dynamic_cast<C&>(p))
// 		std::cout << "C" << std::endl;
// }


int	main () {
	for (int i = 0; i < 100; i++) {
		std::cout << "test numero : " << i << std::endl;
			Base* base = generate();
			identify(base);
			identify(*base);
			delete base;
	}
}