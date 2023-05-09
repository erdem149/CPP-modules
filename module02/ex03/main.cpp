/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:05:19 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/15 14:05:20 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "point.hpp"
int main( void )
{
	const Point	a(0.0f, 0.0f);
	const Point	b(10.0f, 30.0f);
	const Point	c(20.0f, 0.0f);
	const Point	p(10.0f, 15.0f);
	if (bsp(a,b,c,p))
		std::cout << "OK\n";
	else
		std::cout << "KO\n";
}
