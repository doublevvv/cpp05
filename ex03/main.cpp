/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 08:30:17 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/24 16:50:23 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		std::cout << "---------------------------" << std::endl;
		Bureaucrat Vivi("Vivi", 150);
		Bureaucrat Eve("Eve", 1);
		Intern intern;
		AForm *rrf;
		rrf = intern.makeForm("RobotomyRequestForm", "chat");
		Eve.signForm(*rrf);
		Eve.executeForm(*rrf);
		// ShrubberyCreationForm form ("Canard");
		// Eve.signForm(form);
		// Eve.executeForm(form);
		std::cout << Vivi << std::endl;
		std::cout << Eve << std::endl;

	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		std::cout << "---------------------------" << std::endl;
		std::cout << std::endl;
		Bureaucrat Vivi("Vivi", 4);
		Bureaucrat Eve("Eve", 3);
		PresidentialPardonForm form("Canard");
		Vivi.signForm(form);
		Vivi.executeForm(form);
		std::cout << Vivi << std::endl;
		std::cout << Eve << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		std::cout << "---------------------------" << std::endl;
		std::cout << std::endl;
		Bureaucrat Vivi("Vivi", 150);
		Bureaucrat Eve("Eve", 150);
		RobotomyRequestForm form ("Canard");
		Eve.signForm(form);
		Eve.executeForm(form);
		std::cout << Vivi << std::endl;
		std::cout << Eve << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}

}
