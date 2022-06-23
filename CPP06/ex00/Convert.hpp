/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:57:44 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/23 18:52:34 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
#include <cerrno>
#include <climits>
#include <limits>

class Convert {
	public:
		Convert();
		Convert(const std::string&);
		Convert(const Convert&);
		virtual	~Convert();

		Convert&	operator =(const Convert&);

		
		char	convertChar(std::string& str);
		int		convertInt(std::string& str);
		float	convertFloat(std::string& str);
		double	convertDouble(std::string& str);

		bool	isChar(const std::string&);
		bool	isInt(const std::string&);
		bool	isFloat(const std::string&);
		bool	isDouble(const std::string&);

	private:
		// four types
		char	char_;
		int		int_;
		float	float_;
		double	double_;

		// boolean to check
		bool	plusInf_;
		bool	minusInf_;
		bool	nan_;
		
		// overflow to check
		bool	overflowChar_;
		bool	overflowInt_;
		bool	overflowFloat_;
		bool	overflowDouble_;

		void	plusInfIsTrue();
		void	minusInfIsTrue();
		void	nanIsTrue();
		void	isOverflow(const std::string&);
};

#endif