/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:12:25 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/05/30 13:12:26 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
 #define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{

public:
	Cure();
	Cure( const Cure &ref );
	Cure &operator=( const Cure &ref );
	~Cure();

	AMateria *clone( void ) const;
	void use( ICharacter &target );

};

#endif
