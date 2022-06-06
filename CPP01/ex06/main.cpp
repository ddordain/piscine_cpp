/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:27:47 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/06 17:02:05 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	Harl	harl;
	harl.filter("DEBUG");
	harl.filter("INFO");
	harl.filter("WARNING");
	harl.filter("ERROR");
	harl.filter("-------");
}
