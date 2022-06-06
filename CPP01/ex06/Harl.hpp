/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:00:53 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/06 17:07:48 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <cstdlib>
#include <string>

#define PRINT(X) std::cout << X << std::endl;

class Harl {
	private:

	void	debug_();
	void	info_();
	void	warning_();
	void	error_();

	public:
	Harl();
	~Harl();
	void	complain(std::string level);
	void	filter(int i);
};

#endif