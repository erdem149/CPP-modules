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
static	float ft_pow(float base, int exp)
{

}

const int	Fixed::_frac = 8;
/*-----------------constructor-and-destructor-------------------------*/
Fixed::Fixed(void): _value(0)
{
	std::cout << "Fixed object created with default constructor" << std::endl;
}

Fixed::Fixed(const int value): _value(value * ft_pow(2, this->_frac))
{
	std::cout << "Fixed object created with int constructor" << std::endl;
}

Fixed::Fixed(const float value): _value(value * ft_pow(2, this->_frac))
{
	std::cout << "Fixed object created with float constructor" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed object destroyed" << std::endl;
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Fixed object copied" << std::endl;
	*this = copy;
}
/*--------------------------------------------------------------------*/
/*-----------------operator_overloading-------------------------------*/
Fixed	&Fixed::operator=(Fixed const &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_value = copy.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}

/*--------------------------------------------------------------------*/
/*-----------------function-------------------------------------------*/

float	Fixed::toFloat(void) const
{
	return (this->_value * ft_pow(2, -this->_frac));
}

int	Fixed::toInt(void) const
{
	return (this->_value * ft_pow(2, -this->_frac));
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}
/*--------------------------------------------------------------------*/
