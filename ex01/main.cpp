/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:13:20 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/31 01:54:50 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

#define SIZE 3

int main(void) {

	int arr1[SIZE] = {1, 2, 3};
	std::string arr2[SIZE] = {"one", "two", "three"};

	std::cout << "arr1: ";
	for (int i = 0; i < SIZE; i++)
		std::cout << arr1[i] << " ";
	std::cout << std::endl;
	
	std::cout << "arr2: ";
	for (int i = 0; i < SIZE; i++)
		std::cout << arr2[i] << " ";
	std::cout << std::endl;

	::iter<int>(arr1, SIZE, printDup<int>);
	::iter<std::string>(arr2, SIZE, printDup<std::string>);

	return 0;

}
