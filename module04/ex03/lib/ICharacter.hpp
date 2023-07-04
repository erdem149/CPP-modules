/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:13:28 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/05/30 13:13:29 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
 #define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter{

	public:
		virtual	~ICharacter(){}
		virtual std::string const & getName() const = 0;
		virtual void equip( AMateria *m ) = 0;
		virtual void unequip( int idx ) = 0;
		virtual void use( int idx, ICharacter &target ) = 0;
};

#endif
