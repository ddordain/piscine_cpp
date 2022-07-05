/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:11:27 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/05 19:04:52 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#define TAB_SIZE 4

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;

	Animal*	animalTable[TAB_SIZE];

	for (int i = 0; i < TAB_SIZE ; i++) {
		if (i % 2 == 0) {
			animalTable[i] = new Dog();
		} else if (i % 2 == 1) {
			animalTable[i] = new Cat();
		}
	}

	PRINT("table list");
	for (int i = 0; i < TAB_SIZE; i++) {
		PRINT("animal " << i + 1 << " : " << animalTable[i]->getType());
	}

	PRINT(animalTable[0]->getBrain()->getIdeas(1)); // chien 1, idee 1, rien ne se passe car pas d'idee
	animalTable[1]->getBrain()->setIdeas(20, "fish");
	PRINT(animalTable[1]->getBrain()->getIdeas(20));

	for (int i = 0; i < TAB_SIZE; i++) {
		delete animalTable[i];
	}

	// const Animal* k = new Animal(); //=> does not work.

return 0;
}
