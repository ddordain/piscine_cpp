/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:18:47 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/24 15:37:51 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdint.h>

class Data
{
	public:
		Data();
		Data(const std::string);
		Data(const Data&);
		virtual ~Data();

		Data& operator=(const Data&);

		std::string getData() const;
	private:
		std::string 	data_;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t src);

#endif
