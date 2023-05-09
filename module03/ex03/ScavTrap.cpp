/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:02:34 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/23 13:02:35 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "< ScavTrap > - " << this->name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "< ScavTrap > - " << name << " destructed." << std::endl;
}

void    ScavTrap::attack( std::string const& target ) {
    if ( energyPoints <= 0 )
    {
        std::cout << name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "< ScavTrap > - " << this->name << " attacks " << target << " at range, causing " << attackDamage << " points of damage !" << std::endl;
    this->energyPoints -= 1;
}

void    ScavTrap::guardGate()
{
    std::cout << "< ScavTrap > - " << this->name << " is now in Gate keeper mode." << std::endl;
}
