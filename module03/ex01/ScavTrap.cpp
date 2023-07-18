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

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "< ScavTrap > - " << this->_name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "< ScavTrap > - " << _name << " destructed." << std::endl;
}

void    ScavTrap::attack( std::string const& target )
{
    if ( _energyPoints <= 0 )
    {
        std::cout << _name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "< ScavTrap > - " << this->_name << " attacks " << target << " at range, causing " << _attackDamage << " points of damage !" << std::endl;
    this->_energyPoints -= 1;
}

void    ScavTrap::guardGate()
{
    std::cout << "< ScavTrap > - " << this->_name << " is now in Gate keeper mode." << std::endl;
}
