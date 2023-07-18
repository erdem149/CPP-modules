/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:57:07 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/05 17:57:07 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# define N 4
int main( void ) {
    Zombie *zombiz = zombieHorde(N, "zombi");
    for (size_t i = 0; i < N; i++)
    {
        zombiz[i].announce();
    }
    delete [] zombiz;
    return 0;
}
