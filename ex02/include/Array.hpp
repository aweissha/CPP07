/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:53:12 by aweissha          #+#    #+#             */
/*   Updated: 2024/11/02 15:14:43 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array
{
	private:
	T*				_array;
	unsigned int	_size;

	public:
	Array();
	Array(unsigned int n);
	Array(const Array& original);
	Array& operator=(const Array& original);
	~Array();

	unsigned int size() const;
	T& operator[](unsigned int n);
	const T& operator[](unsigned int n) const;
	class OutOfBoundsException : public std::exception
	{
		public:
		const char* what() const throw();
	};
};

#include "Array.tpp"

#endif