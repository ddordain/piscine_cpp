/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:40:49 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/25 20:42:08 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

class NotInContainer : public std::exception {
	public:
		virtual const char * what() const throw() {return ("value not found");}
};

template <typename T>
int easyfind(T& container, int toFind) {
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end()) {throw NotInContainer();}
	else {return (*it);}
}
