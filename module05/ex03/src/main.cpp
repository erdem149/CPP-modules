/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:29:22 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/07/03 14:29:23 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Bureaucrat.hpp"
#include "../lib/Intern.hpp"


int main()
{
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat					worker("worker", 7);

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << "Form Name: " << rrf->getName() << std::endl;
		std::cout << "Form Status: " << rrf->getisSigned() << std::endl;
		std::cout << "Form requirement Grade to Sign: " << rrf->getReqGradeToSign() << std::endl;
		std::cout << "Form Requirement Grade to Execute: " << rrf->getReqGradeToExecute() << std::endl;
		rrf->beSigned(worker);
		rrf->execute(worker);
		worker.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat					worker("worker", 7);

		rrf = someRandomIntern.makeForm("Some Random Form", "Bender");
		std::cout << "Form Name: " << rrf->getName() << std::endl;
		std::cout << "Form Status: " << rrf->getisSigned() << std::endl;
		std::cout << "Form requirement Grade to Sign: " << rrf->getReqGradeToSign() << std::endl;
		std::cout << "Form Requirement Grade to Execute: " << rrf->getReqGradeToExecute() << std::endl;
		rrf->beSigned(worker);
		rrf->execute(worker);
		worker.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
