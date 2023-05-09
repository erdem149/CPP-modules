/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:35:51 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/23 01:35:52 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();

    //GETTER AND SETTER FOR print the private variables
    std::string getName();
    void setName(const std::string &Name);

    void setHitPoints(int hitPoints);
    int getHitPoints();

    void setAttackDamage(int attack);
    int getAttackDamage();

    void setEnergyPoint(int energyPoint);
    int getEnergyPoint();

    //functions
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif
