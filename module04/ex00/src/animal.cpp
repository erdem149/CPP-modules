/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:23:26 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/04/05 14:23:27 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/animal.hpp"

Animal::Animal()
{
    this->setType("Animal");
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << "Copy[Animal] default Constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &copy)
{
    this->type = copy.type;
	std::cout << "Copy[Animal] default Assignment operator" << std::endl;
	return *this;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::setType(const std::string &type)
{
    this->type = type;
}

void Animal::makeSound() const
{
    std::cout << "The animal makes a sound" << std::endl;
}
