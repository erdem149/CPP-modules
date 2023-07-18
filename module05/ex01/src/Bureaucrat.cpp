/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:29:14 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/03 14:29:15 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const std::string name, int grade ): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratException: Grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratException: Grade too Low");
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ): _name(src._name)
{ *this = src; }

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_grade = rhs._grade;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrage() const
{
	return (this->_grade);
}

void	Bureaucrat::GradeDecrement()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::GardeIncrement()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::singForm( Form & form )
{
	if (this->_grade <= form.getReqGradeToSign())
		std::cout << this->_name << " sings " << form.getName() << std::endl;
	else
		std::cout << this->_name << " cannot sign " << form.getName() << " because The form need garde "
			<< form.getReqGradeToSign() << " to be signed" << std::endl;
}


std::ostream& operator<<( std::ostream& os, Bureaucrat& brc )
{
	os << brc.getName() << ", bureaucrat grade " << brc.getGrage() << std::endl;
	return (os);
}
