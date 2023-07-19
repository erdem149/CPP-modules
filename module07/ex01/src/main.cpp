/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:40:24 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/19 14:40:25 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Iter.hpp"

int main(void)
{

	int tab2[] = {0, 1, 2, 3, 4};
	iter(tab2, 5, print);
	std::cout << "--" << std::endl;

	int arr1[] = {1, 2, 3, 4, 5};
	double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char arr3[] = {'a', 'b', 'c', 'd', 'e'};
	std::string arr4[] = {"Erdem", "yılmaz", "42"};

	iter(arr1, 5, print<int>);    // Output: 1 2 3 4 5
	std::cout << "--" << std::endl;
	iter(arr2, 5, print<double>); // Output: 1.1 2.2 3.3 4.4 5.5
	std::cout << "--" << std::endl;
	iter(arr3, 5, print<char>);   // Output: a b c d e
	std::cout << "--" << std::endl;
	iter(arr4, 3, print<std::string>); // Output: ahmet karaca 42
	std::cout << "--" << std::endl;
	return (0);
}
