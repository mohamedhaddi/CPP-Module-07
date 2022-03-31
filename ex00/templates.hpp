/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:16:46 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/31 00:00:05 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template<typename T>
void swap(T & a, T & b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T & min(T & a, T & b)
{
	return (a < b ? a : b);
}

template<typename T>
T & max(T & a, T & b)
{
	return (a > b ? a : b);
}

#endif
