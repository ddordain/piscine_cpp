/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:59:19 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/27 14:13:30 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : size_(N) {}

Span::Span(const Span& copy) {*this = copy;}

Span::~Span() {}

Span&	Span::operator=(const Span& span) {
	if (this == &span) {return (*this);}

	this->size_ = span.size_;
	this->vector_ = span.vector_;
	return (*this);
}

void	Span::addNumber(const int N) {
	if (size_ == vector_.size()) {throw CannotAddNumber();}
	else {vector_.push_back(N);}
}

void	Span::addRange(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last) {
	if (std::distance(first, last) + vector_.size() >= size_) {throw CannotAddRange();}
	else {vector_.insert(vector_.end(), first, last);}
}

int	Span::shortestSpan() const {
	if (size_ < 2) {throw CannotComputeDistance();}

	std::vector<int>::const_iterator i = vector_.begin();
	std::vector<int>::const_iterator end = vector_.end();

	int min = INT_MAX;

	for (; i != end; i++) {
		std::vector<int>::const_iterator j = i + 1;
		for (; j != end; j++) {
			int distance = abs(*i - *j);
			if (distance < min) {min = distance;}
		}
	}
	return (min);
}

// int Span::longestSpan() {
// 	std::vector<int>::iterator start = vector_.begin();
// 	std::vector<int>::iterator end = vector_.end();

// 	std::sort(start, end);
// 	unsigned long distance = vector_.back() - vector_.front();
// 	if (distance > INT_MAX) {distance = INT_MAX;}

// 	return (static_cast<int>(distance));
// }

int Span::longestSpan() const {
	long max = *max_element(vector_.begin(), vector_.end());
	long min = *min_element(vector_.begin(), vector_.end());
	long distance = max - min;
	if (distance > INT_MAX)  {(distance = INT_MAX);}
	return (static_cast<int>(distance));
}