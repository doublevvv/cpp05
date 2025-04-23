/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubbberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:20:11 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 14:31:14 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//Constructors
ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target)
{
    std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	*this = obj;
}
//Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called " << std::endl;
}

//Operator Overload
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	std::cout << "ShrubberyCreationForm Copy Assignment Operator called" << std::endl;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > 137)
		throw (GradeTooLowException());
	else if (getSigned() != true)
		std::cout << "the form isn't signed" << std::endl;
}

std::ostream	&operator<< (std::ostream &out, AForm const &value)
{
	// return (out << value.getName() << ", AForm grade_executed " << value.getGrade_executed()
	// 			<< ", AForm grade signed" << value.getGrade_signed());
	return (out << value.getName() << ", bureaucrat grade " << value.getGrade_executed());
}
