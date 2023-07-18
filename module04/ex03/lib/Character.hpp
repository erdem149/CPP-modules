/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:11:37 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/05/30 13:11:41 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
 #define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{

	private:
		std::string	_name;
		AMateria	*_inventory[4];
	public:
		Character();
		Character( std::string const &name );
		Character( Character const &ref );
		Character &operator=( Character const &ref );
		~Character();

		std::string const	&getName() const;
		void				equip( AMateria *m );
		void				unequip( int idx );
		void				use( int idx, ICharacter &target );
};

#endif
