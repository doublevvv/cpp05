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
ShrubberyCreationForm::ShrubberyCreationForm() : _name("ShrubberyCreationForm"), _grade_signed(145), _grade_executed(137)
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), _name("ShrubberyCreationForm"), _grade_signed(145), _grade_executed(137)
{
    std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) :_name("ShrubberyCreationForm"), _grade_signed(obj._grade_signed), _grade_executed(obj._grade_executed)
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

std::string	ShrubberyCreationForm::getName() const
{
	return (this->_name);
}

std::string	ShrubberyCreationForm::getTarget()
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > 137)
	throw (GradeTooLowException());
	else if (getSigned() != true)
	std::cout << "the form isn't signed" << std::endl;
	else
	{
		std::string	file = _target + "_shrubbery";
		std::ofstream	outfile(file.c_str());
		if (!outfile.is_open())
		{
			std::cout << "cannot open file" << std::endl;
			return ;
		}
		outfile << 	"_ \n";
		outfile << "| | \n";
		outfile <<"| |_ _ __ ___  ___ \n";
		outfile <<"| __| __/ _  / _  \n";
		outfile <<"| |_| | |  __/  __/\n";
		outfile <<"|__|_|  |___|____|\n";
		outfile.close();
		std::cout << "tree has been created !" << std::endl;

	}

}

// std::ostream	&operator<< (std::ostream &out, AForm const &value)
// {
// 	return (out << value.getName() << ", bureaucrat grade " << value.getGrade_executed());
// }
