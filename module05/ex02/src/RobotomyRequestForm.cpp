/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:28:40 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/04 15:28:40 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/RobotomyRequestForm.hpp"
#include "../lib/Bureaucrat.hpp"

std::string const RobotomyRequestForm::Name = std::string("Robotomy Request");

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm( std::string target ):
	AForm(RobotomyRequestForm::Name, 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ): AForm(src) {}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm & rhs )
{
	AForm::operator=(rhs);
	return (*this);
}

const char* RobotomyRequestForm::GradeTooLowException::what() const throw()
{
	return ("RobotomyRequestFormException: Form Grade is too Low");
}

const char* RobotomyRequestForm::FormIsNotSigned::what() const throw()
{
	return ("RobotomyRequestFormException: Form Grade is Not signed");
}

void	RobotomyRequestForm::action() const
{
	srand((unsigned int)time(NULL));
	int	IsSuccessful = rand() % 2;
	if (IsSuccessful == 1)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " has not been robotomized successfully" << std::endl;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if(this->getisSigned() == false)
		throw RobotomyRequestForm::FormIsNotSigned();
	else if (this->getReqGradeToExecute() < executor.getGrage())
		throw RobotomyRequestForm::GradeTooLowException();
	this->action();
}
