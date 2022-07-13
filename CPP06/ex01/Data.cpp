/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:21:28 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/13 14:37:48 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : data_("SoMeThInG") {}
Data::Data(const std::string  str) : data_(str) {}
Data:: Data(const Data& copy) {*this = copy;}
Data::~Data() {}

Data& Data::operator=(const Data& data) {
	if(this == &data) {return *this;}

	this->data_ = data.data_;return *this;
}

std::string Data::getData() const {return (this->data_);}


uintptr_t	serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t src) {
	return (reinterpret_cast<Data*>(src));
}
