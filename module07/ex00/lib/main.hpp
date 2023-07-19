/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:15:48 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/19 14:38:34 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP
# include <iostream>

template<typename E>

void swap(E &variable,E &variable1)
{
	E tmp = variable1;
	variable1 = variable;
	variable = tmp;
}

template<typename E>
E min(E variable, E variable1 )
{
	if(variable < variable1)
		return(variable);
	else if (variable1 < variable)
		return(variable1);
	else
		return(variable1);
}

template<typename E>
E max(E variable , E variable1)
{
	if(variable > variable1)
		return (variable);
	else if(variable1 > variable)
		return (variable1);
	else
		return(variable1);
}

#endif
