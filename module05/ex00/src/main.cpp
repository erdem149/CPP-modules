/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:29:22 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/03 14:29:23 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Bureaucrat.hpp"

int main()
{
	// test the GardeIncrement()
	try
	{
		Bureaucrat er("er", 2);

		std::cout << er;
		er.GardeIncrement();
		std::cout << er;
		er.GardeIncrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// test the GardeDecrement()
	try
	{
		Bureaucrat sameone("Sameone", 149);

		std::cout << sameone;
		sameone.GradeDecrement();
		std::cout << sameone;
		sameone.GradeDecrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// test the Bureaucrat constractor
	try
	{
		Bureaucrat sameone("Sameone", 999);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat sameone("Sameone", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
