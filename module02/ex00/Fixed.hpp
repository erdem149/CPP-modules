/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:05:49 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/15 14:05:50 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					fixedpointvalue;
		static const int	fractionalBits = 8;
	public:
		Fixed( const Fixed &rhs );
		Fixed &operator=(const Fixed &ref);
		Fixed(void);
		~Fixed(void);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif

