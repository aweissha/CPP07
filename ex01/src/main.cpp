/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.cpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: aweissha <aweissha@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/10/30 09:53:15 by aweissha		  #+#	#+#			 */
/*   Updated: 2024/10/30 10:36:06 by aweissha		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "../include/iter.hpp"

template <typename T> void printElement(T& elem)
{
	std::cout << elem << " ";
}

template <typename T> void incrementElement(T& elem)
{
	elem++;
}

template <typename T> void iter(T* array, int length, void (*f)(T&))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

int main()
{
	// Array of int
	int intArray[] = {1, 2, 3, 4, 5};
	int intArraySize = 5;

	std::cout << "Original intArray: ";
	iter(intArray, intArraySize, printElement);
	std::cout << std::endl;
	std::cout << "Incremented intArray: ";
	iter(intArray, intArraySize, incrementElement);
	iter(intArray, intArraySize, printElement);
	std::cout << std::endl;

	// Array of strings
	std::string strArray[] = {"Hello", "world", "bla", "blabla"};
	int strArraySize = 4;

	std::cout << "Original strArray: ";
	iter(strArray, strArraySize, printElement);
	std::cout << std::endl;
}
