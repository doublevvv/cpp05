/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:44:21 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/24 16:48:17 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//Constructors
Intern::Intern()
{
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern(std::string)
{
    std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern(const Intern &obj)
{
	std::cout << "Intern Copy Constructor called" << std::endl;
	*this = obj;
}
//Destructor
Intern::~Intern()
{
	std::cout << "Intern Destructor called " << std::endl;
}

//Operator Overload
Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	std::cout <<"Intern Copy Assignment Operator called" << std::endl;
	return *this;
}

int	Intern::chooseform(std::string name)
{
	int i = 0;
	std::string array[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	while (i < 4)
	{
		if (name == array[i])
			return (i);
		i++;
	}
	return (-1);

}

AForm	*Intern::makeForm(std::string nameform, std::string targetform)
{
	int choosed = chooseform(nameform);
	switch (choosed)
	{
		case (-1):
			std::cout << "invalid form" << std::endl;
		case (1):
			std::cout << "Intern has created a ShrubberyCreationForm" << std::endl;
			return (new ShrubberyCreationForm(targetform));
		case (2):
			std::cout << "Intern has created a RobotomyRequestForm" << std::endl;
			return (new RobotomyRequestForm(targetform));
		case(3):
			std::cout << "Intern has created a PresidentialPardonForm" << std::endl;
			return (new PresidentialPardonForm(targetform));
	}
	return (new ShrubberyCreationForm(targetform));

}
