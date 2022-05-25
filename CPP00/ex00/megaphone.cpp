/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:27:25 by ddordain          #+#    #+#             */
/*   Updated: 2022/05/25 19:27:33 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void    print_str_uppercase(char *str)
{
    for (int i = 0; i < (int)strlen(str); i++) {
        std::cout << (char)toupper(str[i]);
    }
}

int main(int ac, char **av) {
    if (ac == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } else {
        for (int i = 1; i < ac ; i++) {
            print_str_uppercase(av[i]);
        }
        std::cout << std::endl;
    }
}
