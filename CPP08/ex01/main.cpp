/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:20:20 by ddordain          #+#    #+#             */
/*   Updated: 2022/06/27 14:14:49 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define MAX 100
#define MIN 0
#define RANGE MAX-MIN + 1
#define SIZE 1000

int main() {
	srand(time(NULL));
	Span S1(10);
	try{
		S1.addNumber(0);
		S1.addNumber(1);
		S1.addNumber(2);
		S1.addNumber(3);
		S1.addNumber(4);
		S1.addNumber(5);
		S1.addNumber(6);
		S1.addNumber(7);
		S1.addNumber(8);
		S1.addNumber(9);
		S1.addNumber(10);
	}
	catch (std::exception &e) {std::cerr << e.what() << std::endl;}
	Span S2(SIZE);
	std::vector<int> vector;
	for (int i = 0; i < SIZE - 1; i++) {
		int num = rand() % RANGE + MIN + MIN;
		std::cout << num << std::endl;
		vector.push_back(num);
	}
	try {
		S2.addRange(vector.begin(), vector.end());
	}
	catch (std::exception &e) {std::cerr << e.what() << std::endl;}
	int minDistance = S2.shortestSpan();
	int maxDistance = S2.longestSpan();
	std::cout << "short : " << minDistance << std::endl;
	std::cout << "long : " << maxDistance << std::endl;

}
