/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:42:09 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/18 17:42:10 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <stdint.h>
# include <iostream>

struct Data
{
	int x;
	float y;
};

class Serializer
{
public:
	static uintptr_t sarialize(Data *ptr);
	static Data *desarialize(uintptr_t raw);
};
#endif

