/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:58:02 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/05 17:58:02 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_tmp): name(name_tmp)
{
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->weapon = &Weapon;
}

void HumanB::attack(void)const
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
