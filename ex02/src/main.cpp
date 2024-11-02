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

#include "../include/Array.hpp"

int main(void)
{
	try
	{
		// Test default constructor
		Array<int> arr1;
		std::cout << "arr1 size: " << arr1.size() << std::endl;

		// Test constructor with size
		Array<int> arr2(5);
		std::cout << "arr2 size: " << arr2.size() << std::endl;
		for (unsigned int i = 0; i < arr2.size(); ++i)
			std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;

		// Test copy constructor
		Array<int> arr3(arr2);
		std::cout << "arr3 (copy of arr2) size: " << arr3.size() << std::endl;

		// Modify arr2 and ensure arr3 is unaffected
		arr2[0] = 42;
		std::cout << "After modifying arr2[0]:\n";
		std::cout << "arr2[0] = " << arr2[0] << std::endl;
		std::cout << "arr3[0] = " << arr3[0] << " (should be unaffected)" << std::endl;

		// Test assignment operator
		Array<int> arr4;
		arr4 = arr2;
		std::cout << "arr4 (assigned from arr2) size: " << arr4.size() << std::endl;

		// Modify arr2 and ensure arr4 is unaffected
		arr2[1] = 99;
		std::cout << "After modifying arr2[1]:\n";
		std::cout << "arr2[1] = " << arr2[1] << std::endl;
		std::cout << "arr4[1] = " << arr4[1] << " (should be unaffected)" << std::endl;

		// Test out of bounds access
		std::cout << "Attempting out-of-bounds access:" << std::endl;
		std::cout << arr2[10] << std::endl; // Should throw an exception

	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
