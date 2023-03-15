/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:05:35 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/15 14:05:37 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
/*-----------------constructor-and-destructor-------------------------*/
Fixed::Fixed(  const Fixed &ref )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}


Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedpointvalue = number;
}

Fixed::Fixed(void) : fixedpointvalue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
/*--------------------------------------------------------------------*/
/*-----------------operator_overloading-------------------------------*/
Fixed& Fixed::operator=( const Fixed &ref )
{
	std::cout << "Copy assignment operator calle" << std::endl;
	return (*this);
}


/*--------------------------------------------------------------------*/
/*-----------------function-------------------------------------------*/

int Fixed::getRawBits(void) const
{
	return this->fixedPointValue;
}

void  Fixed::setRawBits( int const raw ) : fixedpointvalue(raw)
{

}
/*--------------------------------------------------------------------*/
