/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:04:18 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/04 12:04:19 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP


#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_reqGradeToSign;
		const int			_reqGradeToExecute;
	public:
		Form();
		Form( std::string Name, int reqGradeToSign, int reqGradeToExecute );
		Form( const Form & src );
		~Form();
		class GradeTooLowException: public std::exception
		{
			virtual	const char * what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual	const char * what() const throw();
		};

		Form &					operator = ( const Form & rhs );
		std::string				getName() const;
		bool					getisSigned() const;
		int			getReqGradeToSign() const;
		int			getReqGradeToExecute() const;
		void					beSigned( Bureaucrat & brc );
};

std::ostream&		operator << ( std::ostream& os, Form& form );

#endif
