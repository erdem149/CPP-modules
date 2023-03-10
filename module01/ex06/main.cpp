/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:26:32 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/10 15:26:37 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int word_count, char **str)
{
    if(word_count == 2)
    {
        Harl    harl;

        harl.complain(str[1]);
    }
    else
        std::cout << "Usage: ./harlFilter \"level\"" << std::endl;
    return EXIT_SUCCESS;
}
