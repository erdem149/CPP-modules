/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:04:31 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/04 18:04:32 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
 #define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{

public:
	/* Constructor & Destructor */
	Intern( void ); // default Constructor
	Intern( const Intern &ref ); // copy Constructor
	~Intern( void ); // destructor

	/* Basic Operators */
	Intern &operator=( const Intern &ref ); // copy assignment operator

	/* Main Memeber Functions */
	AForm *makeForm( std::string formName, std::string targetName );

	/* Exceptions */
	class InternCantCreatedForm : public std::exception{
		public:
			virtual const char *what(void) const throw();
	};
};

#endif

