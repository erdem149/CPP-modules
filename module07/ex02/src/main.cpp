/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:46:05 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/19 15:46:06 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Array.hpp"

int main()
{
	{
		std::cout <<  "---------------- Empty array (int) ----------------"  << std::endl;
		// Empty array
		Array<int> arr1;
		std::cout << "Size of arr1: " << arr1.getSize() << std::endl;
	}

	{
		std::cout <<  "---------------- Array with size (int) ----------------"  << std::endl;
		// Array with default size
		Array<int> arr2(5);
		std::cout << "Size of arr2: " << arr2.getSize() << std::endl;
	}

	{
		std::cout <<  "---------------- Copy constructor (int) ----------------"  << std::endl;
		Array<int> arr2(5);
		Array<int> arr3(arr2);
		std::cout << "Size of arr3: " << arr3.getSize() << std::endl;
	}

	{
		std::cout <<  "---------------- Copy assignment operator (int) ----------------"  << std::endl;
		Array<int> arr1(5);
		Array<int> arr2;
		std::cout << "Size of arr1 before assignment: " << arr1.getSize() << std::endl;
		std::cout << "Size of arr2 before assignment: " << arr2.getSize() << std::endl;

		arr1[0] = 0;
		arr1[1] = 1;
		arr1[2] = 2;

		std::cout << "arr1 elements before assignment: " << arr1 << std::endl;
		std::cout << "arr2 elements before assignment: " << arr2 << std::endl;

		arr2 = arr1;

		std::cout << "Size of arr1 after assignment: " << arr1.getSize() << std::endl;
		std::cout << "arr1 elements after assignment: " << arr1 << std::endl;
		std::cout << "Size of arr2 after assignment: " << arr2.getSize() << std::endl;
		std::cout << "arr2 elements after assignment: " << arr2 << std::endl;

		arr1[0] = -1;
		arr1[1] = -1;
		arr1[2] = -1;
		arr1[3] = -1;

		arr2[4] = 9;

		std::cout << "arr1 elements after assignment & change: " << arr1 << std::endl;
		std::cout << "arr2 elements after assignment & change: " << arr2 << std::endl;
	}

	{
		std::cout <<  "---------------- Accessing elements with [] and printing (int) ----------------"  << std::endl;
		Array<int> arr4(5);
		arr4[0] = 1;
		arr4[1] = 2;
		arr4[2] = 3;
		std::cout << "arr4 elements: ";
		std::cout << arr4 << std::endl;
	}

	{
		std::cout <<  "---------------- Out of bounds exception (int) ----------------"  << std::endl;
		Array<int> arr5(3);
		arr5[0] = 0;
		arr5[1] = 1;
		arr5[2] = 2;
		try
		{
			std::cout << "arr5 elements: ";
			std::cout << arr5[0] << " - ";
			std::cout << arr5[1] << " - ";
			std::cout << arr5[2] << " - ";
			std::cout << arr5[3] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	{
		std::cout <<  "---------------- Array with size (char) ----------------"  << std::endl;
		Array<char> arr6(4);
		std::cout << "Size of arr6: " << arr6.getSize() << std::endl;
	}

	{
		std::cout <<  "---------------- Printing elements (char) ----------------"  << std::endl;
		Array<char> arr7(4);
		arr7[0] = 'a';
		arr7[1] = 'b';
		//arr7[2] = 'c';
		arr7[3] = 'd';
		std::cout << "arr7 elements: ";
		std::cout << arr7 << std::endl;
	}

	{
		std::cout <<  "---------------- Array with size (char*) ----------------"  << std::endl;
		Array<const char*> arr8(5);
		std::cout << "Size of arr8: " << arr8.getSize() << std::endl;
	}

	{
		std::cout <<  "---------------- Array with size (std::string) ----------------"  << std::endl;
		Array<std::string> arr9(4);
		std::cout << "Size of arr9: " << arr9.getSize() << std::endl;
	}

	{
		std::cout <<  "---------------- Printing elements (std::string) ----------------"  << std::endl;
		Array<std::string> arr10(4);
		arr10[0] = "Jack";
		arr10[1] = "Micheal";
		arr10[2] = "Emanuel";
		std::cout << "arr10 elements: ";
		std::cout << arr10 << std::endl;
	}

	{
		std::cout <<  "---------------- Different way to Printing elements (std::string) ----------------"  << std::endl;
		//Array<std::string> tab = {"Alice", "Jack"}; tarzında init işlemini gerçekleştiremiyoruz. // Bir başlatıcı listesiyle başlatılamaz hatası döndürüyor: "cannot be initialized with an initializer list"
		std::string elements[] = {"Alice", "Jack"};
		unsigned int size = sizeof(elements) / sizeof(elements[0]);
		Array<std::string> tab(elements, size);
		std::cout << "tab size: " << tab.getSize() << std::endl;
		std::cout << tab << std::endl;
		//hala doğrudan liste kullanarak bir Array nesnesini başlatmak mümkün değildir.
	}

	{
		std::cout <<  "---------------- Wrong use ----------------"  << std::endl;
		Array<int*> tab[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
		std::cout << "tab size: " << tab->getSize() << std::endl;
		std::cout << "tab elements: " << tab << std::endl;
	}

	return 0;
}
