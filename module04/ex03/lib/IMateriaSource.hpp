/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:40:08 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/05/30 13:40:09 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
 #define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(){}
		virtual void learnMateria(AMateria * ) = 0;
		virtual AMateria *createMateria( std::string const &type ) = 0;
};

#endif
