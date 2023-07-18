/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:13:07 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/05/30 13:13:08 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
 #define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice( const Ice &ref );
	Ice &operator=( const Ice &ref );
	~Ice();

	AMateria *clone( void ) const;
	void use( ICharacter &target );

};

#endif
