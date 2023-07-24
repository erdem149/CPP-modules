/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:04:48 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/04 12:04:49 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/AForm.hpp"
#include "../lib/Bureaucrat.hpp"

AForm::AForm(): _name(), _reqGradeToSign(), _reqGradeToExecute()
{
	throw AForm::GradeTooHighException();
}

AForm::AForm( std::string name, int reqGradeToSign, int reqGradeToExecute ):
    _name(name), _reqGradeToSign(reqGradeToSign), _reqGradeToExecute(reqGradeToExecute)
{
	if (reqGradeToSign == 0 || reqGradeToExecute == 0)
		throw AForm::GradeTooHighException();
	if ( reqGradeToSign > 150 || reqGradeToExecute > 150)
		throw AForm::GradeTooLowException();
	this->_isSigned = false;
}

AForm::AForm( const AForm & src):
	_name(src._name), _reqGradeToSign(src._reqGradeToSign), _reqGradeToExecute(src._reqGradeToExecute)
{
    *this = src;
}

AForm::~AForm() {}

AForm & AForm::operator=( const AForm & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_isSigned = rhs._isSigned;
	return (*this);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("FormException: Form Grade is too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("FormException: Form Grade is too Low");
}

std::string	AForm::getName() const
{
    return (this->_name);
}

bool		AForm::getisSigned() const
{
    return (this->_isSigned);
}

int			AForm::getReqGradeToSign() const
{
    return (this->_reqGradeToSign);
}

int			AForm::getReqGradeToExecute() const
{
    return (this->_reqGradeToExecute);
}

void		AForm::beSigned( Bureaucrat & brc )
{
	if (brc.getGrage() > this->_reqGradeToSign)
		throw  AForm::GradeTooLowException();
	this->_isSigned = true;
}

std::ostream& operator<<( std::ostream& os, AForm& form )
{
	os << "The Form " << form.getName() << ", need a Bureaucrat has Grade " << form.getReqGradeToSign() << " or higher to be able to sign, and need a Bureaucrat has Grade "
		<< form.getReqGradeToExecute() << " or higher to be execute ";
	if (form.getisSigned() == true)
		os << "and it's signed" << std::endl;
	else
		os << "and it's not signed" << std::endl;
	return (os);
}
