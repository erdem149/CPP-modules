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

#include "../lib/aanimal.hpp"

AAnimal::AAnimal()
{
    this->setType("Animal");
    std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal default destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    *this = copy;
    std::cout << "Copy[Animal] default Constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &copy)
{
    this->type = copy.type;
	std::cout << "Copy[Animal] default Assignment operator" << std::endl;
	return *this;
}

std::string AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::setType(const std::string &type)
{
    this->type = type;
}

void AAnimal::makeSound( void ) const
{
    std::cout << "AAnimal makeSound called" << std::endl;
}
