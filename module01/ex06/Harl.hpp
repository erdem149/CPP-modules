/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:26:58 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/10 15:26:59 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:
	void debug( void );
	void info(void);
	void warning(void);
	void error( void );
public:
	void complain( std::string level );
};

typedef void (Harl::*t_func) ( void );
