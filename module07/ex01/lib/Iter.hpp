/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:39:35 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/19 14:39:36 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
template<typename Y>
void print(Y &variable)
{
	std::cout<< variable <<std::endl;
}

template<typename E>

void iter(E *arr, int len, void(*fun)(E&))
{
	for(int i=0; i < len ; i++)
		fun(arr[i]);
}

#endif
