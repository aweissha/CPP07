/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:03:47 by aweissha          #+#    #+#             */
/*   Updated: 2024/10/30 15:51:14 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template <typename T> Array<T>::Array() : _size(0)
{
	this->_array = new T[0];
}

template <typename T> Array<T>::Array(unsigned int n) : _size(n)
{
	this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->_array[i] = 0;
}

template <typename T> Array<T>::Array(const Array& original) : _size(original._size)
{
	this->_array = new T[original._size];
	for (unsigned int i = 0; i < original._size; i++)
		this->_array[i] = original._array[i];
}

template <typename T> Array<T>& Array<T>::operator=(const Array& original)
{
	if (this != &original)
	{
		this->_size = original._size;
		delete [] this->_array;
		this->_array = new T[original._size];
		for (unsigned int i = 0; i < original._size; i++)
			this->_array[i] = original._array[i];
	}
	return (*this);
}

template <typename T> Array<T>::~Array()
{
	delete [] this->_array;
}

template <typename T> unsigned int Array<T>::size() const
{
	return (this->_size);
}

template <typename T> T& Array<T>::operator[](unsigned int n)
{
	if (n >= this->_size)
		throw (OutOfBoundsException());
	return (this->_array[n]);
}

template <typename T> const T& Array<T>::operator[](unsigned int n) const
{
	if (n >= this->_size)
		throw (OutOfBoundsException());
	return (this->_array[n]);
}

template <typename T> const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Out of bounds");
}
