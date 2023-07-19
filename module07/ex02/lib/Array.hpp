/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:45:38 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/19 15:45:38 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
 #define ARRAY_HPP

#include <iostream>

template< typename T >
class Array{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array( void );
		Array( unsigned int n );
		Array( const Array &ref );
		Array( const T* elements, unsigned int size ); // ekstra fonksiyon
		~Array( void );

		Array &operator=( const Array &ref );
		T &operator[]( unsigned int i ) const;

		unsigned int getSize( void );

		class OutOfBoundsException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
};

template< typename T >
std::ostream &operator<<( std::ostream &os, Array<T> &obj );

#include "../src/Array.tpp"
#endif
