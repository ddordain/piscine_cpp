/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:01:40 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/27 16:37:50 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main() {
	MutantStack<int> mstack;
	std::cout << "Size before push: " << mstack.size() << std::endl;
	mstack.push(200);
	mstack.push(20);
	std::cout << "number inside " << mstack.top() << std::endl;
	std::cout << "Size after push: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;

	for (int i = 0; i < 10; i++) {mstack.push(i);}

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << std::endl;
	std::cout << mstack.size() << " items in mstack" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl;
	std::stack<int> s(mstack);

	std::cout << "copy in std::stack, no iterator anymore" << std::endl;

	std::cout << std::endl;
	std::cout << s.size() << " items in std::stack" << std::endl;
	while (!s.empty()) {
		std::cout << s.top() << std::endl;
		s.pop();
	}

	std::list<int> list;
	std::cout << "Size before push: " << list.size() << std::endl;
	list.push_back(200);
	list.push_back(20);
	std::cout << "number inside " << list.back() << std::endl;
	std::cout << "Size after push: " << list.size() << std::endl;
	list.pop_back();
	std::cout << "Size after pop: " << list.size() << std::endl;

	return 0;
}
