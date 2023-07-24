/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:28:32 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/04 15:28:32 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/PresidentialPardonForm.hpp"
#include "../lib/Bureaucrat.hpp"

std::string const PresidentialPardonForm:: Name = std::string("Presidential Pardon");

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm( std::string target ):
	AForm(PresidentialPardonForm::Name, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): AForm(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm & rhs )
{
	AForm::operator=(rhs);
	return (*this);
}

const char* PresidentialPardonForm::GradeTooLowException::what() const throw()
{
	return ("PresidentialPardonFormException: Form Grade is too Low");
}

const char* PresidentialPardonForm::FormIsNotSigned::what() const throw()
{
	return ("PresidentialPardonFormException: Form Grade is Not signed");
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if(this->getisSigned() == false)
		throw PresidentialPardonForm::FormIsNotSigned();
	else if (this->getReqGradeToExecute() < executor.getGrage())
		throw PresidentialPardonForm::GradeTooLowException();
	this->action();
}

