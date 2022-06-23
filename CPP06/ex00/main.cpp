/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:21:14 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/23 18:58:28 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

#define PRINT(X) std::cout << X << std::endl;

int main(){
	PRINT(std::numeric_limits<float>::max());
	PRINT(__FLT_MAX__);
	PRINT(-__FLT_MAX__);
	PRINT(__FLT_MIN__);
	PRINT(std::numeric_limits<double>::max());
	return 0;
}