/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:24:56 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/13 14:48:19 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

class Span {
	public:
		Span();
		Span(unsigned int);
		Span(const Span&);
		virtual ~Span();

		Span&	operator = (const Span&);

		void	addNumber(const int);
		void	addRange(std::vector<int>::const_iterator, std::vector<int>::const_iterator);

		int	longestSpan() const;
		int	shortestSpan() const;	

	class CannotAddNumber : public std::exception {
		public:
			virtual const char* what() const throw() {return ("Cannot Add Number. Size of span already reached");}
	};
	class CannotAddRange : public std::exception {
		public:
			virtual const char* what() const throw() {return ("Cannot Add Range. Size of span already reached");}
	};
	class CannotComputeDistance : public std::exception {
		public:
			virtual const char* what() const throw() {return ("Cannot Compute Distance. Size of Span too little");}
	};
	private:
		unsigned int		size_;
		std::vector<int>	vector_;
};

#endif
