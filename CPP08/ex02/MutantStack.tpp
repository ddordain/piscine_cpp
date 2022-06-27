/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:46:16 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/27 16:17:00 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack<T>() {} // MutantStack() : std::stack<T>() {}
		MutantStack<T>(const MutantStack& copy) {*this == copy;}
		~MutantStack<T>() {}
	
		MutantStack& operator=(const MutantStack& mutant) {
			if (this == &mutant) {return (*this);}
			this->c = mutant.c; //underlying container
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator	begin() {return (this->c.begin());}
		iterator	end() {return (this->c.end());}
};