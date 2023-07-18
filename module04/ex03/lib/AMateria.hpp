/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:08:40 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/05/30 13:08:41 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
 #define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class	ICharacter;

class	AMateria{

	protected:
		std::string type;
	public:
		AMateria();
		AMateria( const AMateria &ref );
		AMateria( std::string const &type );
		AMateria &operator=( const AMateria &ref );
		virtual ~AMateria();

		std::string const &getType( ) const; // Returns the materia type

		virtual AMateria *clone( ) const = 0;
		virtual void use( ICharacter &target );
};

#endif
