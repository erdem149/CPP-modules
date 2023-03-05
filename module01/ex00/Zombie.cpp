/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:55:05 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/05 17:55:06 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name=name;
}

Zombie::~Zombie(void)
{
	std::cout<<this->name<<" Zombie has been destroyed\n";
}

void Zombie::announce( void )
{
	std::cout<<this->name<< ": BraiiiiiiinnnzzzZ...\n";
}
