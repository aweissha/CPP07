/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:53:12 by aweissha          #+#    #+#             */
/*   Updated: 2024/10/30 10:10:34 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T& argument1, T& argument2)
{
	T tmp;
	
	tmp = argument1;
	argument1 = argument2;
	argument2 = tmp;
}

template <typename T> T min(const T& value1, const T& value2)
{
	if (value1 < value2)
		return (value1);
	else
		return (value2);
}

template <typename T> T max(const T& value1, const T& value2)
{
	if (value1 > value2)
		return (value1);
	else
		return (value2);
}

#endif