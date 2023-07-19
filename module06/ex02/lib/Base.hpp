/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:03:51 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/19 13:03:52 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE
# define BASE
#include <iostream>
#include <ctime>
#include <cstdlib>

class Base
{
public:
	virtual ~Base(void)
	{
		std::cout << "Base Class Destructor Called" << std::endl;
	}
};

class A:public Base
{
public:
	void print(void)
	{
		std::cout<<"Class Type is A"<<std::endl;
	}
};

class B:public Base
{
public:
	void print(void)
	{
		std::cout<<"Class Type is B"<<std::endl;
	}
};

class C:public Base
{
public:
	void print(void)
	{
		std::cout<<"Class Type is C"<<std::endl;
	}
};
#endif
