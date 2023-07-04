/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:28:46 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/03 14:28:48 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
	Bureaucrat();
	Bureaucrat( const std::string name, int grade );
	Bureaucrat( const Bureaucrat & src );
	Bureaucrat & operator = ( const Bureaucrat & rhs );
	~Bureaucrat();
	class GradeTooLowException: public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooHighException: public std::exception
	{
		virtual const char* what() const throw();
	};
	std::string		getName() const;
	unsigned int	getGrage() const;
	void			GardeIncrement();
	void			GradeDecrement();
};

std::ostream& operator << ( std::ostream& os, Bureaucrat& brc );


#endif
