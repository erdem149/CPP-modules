/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:04:27 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/19 13:04:27 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Base.hpp"

Base *generate(void)
{
	try
	{
		srand(time(NULL));
		int random = rand() % 3;
		if (random == 0)
			return new A();
		else if (random == 1)
			return new B();
		else
			return new C();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (NULL);
	}
}

void identify(Base *p)
{
	if(dynamic_cast<A*>(p))
		dynamic_cast<A*>(p)->print();
	else if(dynamic_cast<B*>(p))
		dynamic_cast<B*>(p)->print();
	else if(dynamic_cast<C*>(p))
		dynamic_cast<C*>(p)->print();
}

void identify(Base &p)
{
	try
	{
		dynamic_cast<A&>(p).print();
	}
	catch (const std::exception& e)
	{
		try
		{
			dynamic_cast<B&>(p).print();
		}
		catch (const std::exception& e)
		{
			try
			{
				dynamic_cast<C&>(p).print();
			}
			catch (const std::exception& e)
			{
				std::cerr<< e.what()<<std::endl;
			}
		}
	}
}

int main(void)
{
	Base *ptr = generate();

	identify(ptr);
	identify(*ptr);

	Base a;
	Base *b = NULL;
	identify(a);
	identify(b);
	delete ptr;
	return (0);
}
