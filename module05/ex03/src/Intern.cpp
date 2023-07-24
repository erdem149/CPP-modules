/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:04:59 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/04 18:05:00 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Intern.hpp"

Intern::Intern( void ){
	std::cout <<  "Intern Default Constructor Called"  << std::endl;
}

Intern::Intern( const Intern &ref ){
	std::cout <<  "Intern Copy Constructor Called"  << std::endl;
	*this = ref;
}

Intern::~Intern(void){
	std::cout <<  "Intern Destructor Called"  << std::endl;
}

Intern &Intern::operator=( const Intern &ref ){
	std::cout <<  "Intern Assignment Operator Called"  << std::endl;
	if (this != &ref)
	{
		*this = ref;
	}
	return (*this);
}

AForm *Intern::makeForm( std::string formName, std::string targetName ){

	std::string form_name_list[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int index = 0;
	int lenght = form_name_list->length() - 1;
	while (index < lenght && (form_name_list[index].empty() == false) && (form_name_list[index]).compare(formName))
		index++;
	AForm *ret;
	switch (index)
	{
		case 0:
			ret = new RobotomyRequestForm(targetName);
			break;
		case 1:
			ret = new PresidentialPardonForm(targetName);
			break;
		case 2:
			ret = new ShrubberyCreationForm(targetName);
			break;
		default:
			throw ( Intern::InternCantCreatedForm() );
	}
	std::cout <<  "Intern creates " << ret->getName() << std::endl;
	return (ret);
}

const char *Intern::InternCantCreatedForm::what() const throw(){
	return (  "Intern can't created form because there is no form this type!"  );
}
