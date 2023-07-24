/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:27:41 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/04 15:27:42 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		RobotomyRequestForm();
		std::string const	_target;
	public:
		static std::string const	Name;
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm & src );
		~RobotomyRequestForm();
		RobotomyRequestForm & operator = ( const RobotomyRequestForm & rhs );
		class GradeTooLowException: public std::exception
		{
			virtual	const char * what() const throw();
		};
		class FormIsNotSigned: public std::exception
		{
			virtual	const char * what() const throw();
		};
		void	action() const;
		void	execute( Bureaucrat const & executor ) const;
};

#endif

