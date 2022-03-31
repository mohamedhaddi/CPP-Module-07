/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:13:20 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/31 01:19:11 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <sstream>

int main(void) {

	Array<int> arr1;

	std::cout << "arr1: ";
	for (unsigned int i = 0; i < arr1.size(); i++)
		std::cout << arr1[i] << " ";
	std::cout << std::endl << std::endl;

	Array<std::string> arr4;

	std::cout << "arr4: ";
	for (unsigned int i = 0; i < arr4.size(); i++)
		std::cout << arr4[i] << " ";
	std::cout << std::endl << std::endl;

	Array<int> arr2(5);
	Array<int> arr3(arr2);
	arr1 = arr3;

	std::cout << "arr1: ";
	for (unsigned int i = 0; i < arr1.size(); i++)
		std::cout << arr1[i] << " ";
	std::cout << std::endl << std::endl;

	Array<std::string> arr5(5);
	Array<std::string> arr6(arr5);
	arr4 = arr6;

	std::cout << "arr4: ";
	for (unsigned int i = 0; i < arr4.size(); i++)
		std::cout << arr4[i] << " ";
	std::cout << std::endl << std::endl;

	for (unsigned int i = 0; i < arr1.size(); i++)
		arr1[i] = i;

	std::cout << "arr1: ";
	for (unsigned int i = 0; i < arr1.size(); i++)
		std::cout << arr1[i] << " ";
	std::cout << std::endl << std::endl;

	for (unsigned int i = 0; i < arr4.size(); i++)
	{
		std::stringstream s;
		s << i;
		arr4[i] = "string" + s.str();
	}

	std::cout << "arr4: ";
	for (unsigned int i = 0; i < arr4.size(); i++)
		std::cout << arr4[i] << " ";
	std::cout << std::endl << std::endl;

	try {
		arr1[arr1.size() + 1];
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	return 0;

}
