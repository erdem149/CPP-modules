/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:17:20 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/05/30 13:17:21 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
 #define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	private:
		AMateria	*_materias[4];
	public:
		MateriaSource();
		MateriaSource( const MateriaSource &ref );
		~MateriaSource();

		MateriaSource &operator=( const MateriaSource &ref );

		void		learnMateria( AMateria *);
		AMateria	*createMateria( const std::string  &type );
};

#endif
