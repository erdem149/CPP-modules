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

Fixed::Fixed(  const Fixed &ref )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed& Fixed::operator=( const Fixed &ref )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedpointvalue = ref.getRawBits();
	return (*this);
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedpointvalue = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedpointvalue);
}
