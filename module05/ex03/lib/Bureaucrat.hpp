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
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <string>
#include <iostream>
class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat( const std::string Name, int Grade );
		Bureaucrat( const Bureaucrat & src );
		~Bureaucrat();
		Bureaucrat & operator = ( const Bureaucrat & rhs );
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};

		std::string		getName() const;
		int				getGrage() const;
		void			GardeIncrement();
		void			GradeDecrement();
		void			singForm( AForm & form );
		void			executeForm( AForm const & form );
};

std::ostream& operator << ( std::ostream& os, Bureaucrat& brc );

#endif
