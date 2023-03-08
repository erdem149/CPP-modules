/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:58:08 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/05 17:58:09 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon* weapon;
		std::string name;
	public:
		HumanB( std::string name_tmp );
		void    setWeapon( Weapon& weapon );
		void    attack( void ) const;
};
