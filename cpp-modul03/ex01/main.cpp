/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:36:08 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/23 01:36:10 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap ash( "erdem" );
    ScavTrap ash2( "yilmaz" );

    ash.attack( "kelebek saldırısı" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
    ash.guardGate();

    return 0;
}
