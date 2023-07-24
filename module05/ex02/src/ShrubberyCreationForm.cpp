/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:28:49 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/04 15:28:50 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ShrubberyCreationForm.hpp"
#include "../lib/Bureaucrat.hpp"

std::string const ShrubberyCreationForm::Name = std::string("Shrubbery Creation");

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ):
	AForm(ShrubberyCreationForm::Name, 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ): AForm(src) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm & rhs )
{
	AForm::operator=(rhs);
	return (*this);
}

const char* ShrubberyCreationForm::FileCannotCreate::what() const throw()
{
	return ("ShrubberyCreationFormException: A Problem Happened While Creating The File");
}

const char* ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
	return ("ShrubberyCreationFormException: Form Grade is too Low");
}

const char* ShrubberyCreationForm::FormIsNotSigned::what() const throw()
{
	return ("ShrubberyCreationFormException: Form Grade is Not signed");
}

void	ShrubberyCreationForm::action() const
{
	std::fstream	TreeFile(this->_target + "_shrubbery", std::fstream::out);
	if (!TreeFile.is_open() || TreeFile.bad())
		throw ShrubberyCreationForm::FileCannotCreate();
	TreeFile << "          .     .  .      #     .      .          .\n     .       .      .     #       .           .\n        .      .         ###            .      .      .\n      .      .   '#:. .:##'##:. .:#'  .      .\n          .      . '####'###'####'  .\n       .     '#:.    .:#'###'#:.    .:#'  .        .       .\n  .             '#########'#########'        .        .\n        .    '#:.  '####'###'####'  .:#'   .       .\n     .     .  '#######''##'##''#######'                  .\n                .'##'#####'#####'##'           .      .\n    .   '#:. ...  .:##'###'###'##:.  ... .:#'     .\n      .     '#######'##'#####'##'#######'      .     .\n    .    .     '#####''#######''#####'    .      .\n            .     '      000      '    .     .\n       .         .   .   000     .        .       .\n.. .. ..................O000O........................ ......\n"
 		<< std::endl;
	TreeFile.close();
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if(this->getisSigned() == false)
		throw ShrubberyCreationForm::FormIsNotSigned();
	else if (this->getReqGradeToExecute() < executor.getGrage())
		throw ShrubberyCreationForm::GradeTooLowException();
	this->action();
}
