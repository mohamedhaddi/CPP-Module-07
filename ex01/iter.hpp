/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:16:46 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/31 00:00:29 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void iter(T* arr, int size, void(*f)(T*))
{
	for (int i = 0; i < size; i++)
		f(&arr[i]);
}

template<typename T>
void dup(T* x)
{
	*x += *x;
}

#endif
