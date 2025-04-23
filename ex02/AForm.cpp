/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:12:05 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 14:20:42 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//Constructors
AForm::AForm() : _signed(false), _grade_signed(150), _grade_executed(150)
{
	std::cout << "AForm Default Constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called " << std::endl;
}
AForm::AForm(std::string name, int grade_signed, int grade_exec) : _name(name), _grade_signed(grade_signed), _grade_executed(grade_exec)
{
    std::cout << "AForm Default Constructor called" << std::endl;
}

AForm::AForm(const AForm &obj) : _grade_signed(obj._grade_signed), _grade_executed(obj._grade_executed)
{
	std::cout <<"AForm Copy Constructor called" << std::endl;
	*this = obj;
}

//Operator Overload
AForm &AForm::operator=(const AForm&rhs)
{
	(void)rhs;
	std::cout << "AForm Copy Assignment Operator called" << std::endl;
	return (*this);
}

int	AForm::getGrade_executed() const
{
	return (this->_grade_executed);
}

int	AForm::getGrade_signed() const
{
	return (this->_grade_signed);
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Error : grade is too high\n");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Error : grade is too low\n");
}

std::ostream	&operator<< (std::ostream &out, AForm const &value)
{
	return (out << value.getName() << ", bureaucrat grade " << value.getGrade_executed());
}

void	AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= _grade_signed)
	{
		std::cout << bureaucrat.getName() << ", signed form : " << _name  << std::endl;
		_signed = true;
	}
	else
		throw (GradeTooLowException());
}
