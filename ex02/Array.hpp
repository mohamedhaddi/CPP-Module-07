/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:01:40 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/31 01:11:42 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{

	public:

		Array(void) : _size(0) {

			std::cout 	<< "Default constructor called "
						<< "for an Array of "
						<< 0 << " elements" << std::endl;

			this->_array = new T[0]();

		};

		Array(unsigned int n) : _size(n) {

			std::cout 	<< "Constructor called "
						<< "for an Array of "
						<< n << " elements" << std::endl;

			this->_array = new T[n]();

		};

		Array(Array const & src) : _size(src._size) {

			std::cout 	<< "Copy constructor called "
						<< "for an Array of "
						<< src._size << " elements" << std::endl;

			this->_array = new T[src._size];

			for (unsigned int i = 0; i < src._size; i++)
				this->_array[i] = src._array[i];

		};

		~Array(void) {

			std::cout 	<< "Destructor called "
						<< "for Array of "
						<< this->_size << " elements" << std::endl;

			delete [] this->_array;

		};

		Array &	operator=(Array const & rhs) {

			std::cout 	<< "Assignment operator called "
						<< "for Array of "
						<< rhs._size << " elements" << std::endl;

			if (this != &rhs)
			{

				this->_size = rhs._size;

				delete [] this->_array;
				this->_array = new T[rhs._size];

				for (unsigned int i = 0; i < rhs._size; i++)
					this->_array[i] = rhs._array[i];

			}

			return *this;

		};

		T &	operator[](unsigned int index) const {

			if (index >= this->_size)
				throw Array<T>::OutOfRangeException();

			return this->_array[index];

		};

		unsigned int size(void) const {

			return this->_size;

		};

	private:

		T *				_array;
		unsigned int	_size;
		
		class OutOfRangeException : public std::exception {
			public:
				virtual const char * what() const throw() {
					return "Index out of bounds";
				};
		};

};

#endif
