/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:58:24 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/05/22 16:58:25 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( const Brain &copy )
{
    *this = copy;
}

Brain::~Brain(void)
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &copy)
{
	std::cout << "Brain copy called." << std::endl;
    if ( this != &copy )
    {
        for ( int i = 0; i < 100; i++ )
        {
            this->brain_array[i] = copy.brain_array[i];
        }
    }
    return *this;
}
