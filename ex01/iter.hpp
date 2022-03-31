/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:16:46 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/31 01:54:07 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T* arr, int size, void(*f)(T const &))
{
	for (int i = 0; i < size; i++)
		f(arr[i]);
}

template<typename T>
void printDup(T const & x)
{
	std::cout << x+x << std::endl;
}

#endif
