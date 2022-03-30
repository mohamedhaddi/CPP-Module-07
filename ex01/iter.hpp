/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:16:46 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/30 23:51:56 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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