/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:12:05 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 11:14:44 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Constructors
Form::Form() : _signed(false), _grade_signed(150), _grade_executed(150)
{
	std::cout << "Form Default Constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form Destructor called " << std::endl;
}
Form::Form(std::string name, int grade_signed, int grade_exec) : _name(name), _grade_signed(grade_signed), _grade_executed(grade_exec)
{
    std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(const Form &obj) : _grade_signed(obj._grade_signed), _grade_executed(obj._grade_executed)
{
	std::cout <<"Form Copy Constructor called" << std::endl;
	*this = obj;
}

//Operator Overload
Form &Form::operator=(const Form&rhs)
{
	(void)rhs;
	std::cout << "Form Copy Assignment Operator called" << std::endl;
	return (*this);
}

int	Form::getGrade_executed() const
{
	return (this->_grade_executed);
}

int	Form::getGrade_signed() const
{
	return (this->_grade_signed);
}

std::string	Form::getName() const
{
	return (this->_name);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Error : grade is too high\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Error : grade is too low\n");
}

std::ostream	&operator<< (std::ostream &out, Form const &value)
{
	// return (out << value.getName() << ", Form grade_executed " << value.getGrade_executed()
	// 			<< ", Form grade signed" << value.getGrade_signed());
	return (out << value.getName() << ", bureaucrat grade " << value.getGrade_executed());
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= _grade_signed)
	{
		std::cout << bureaucrat.getName() << ", signed form : " << _name  << std::endl;
		_signed = true;
	}
	else
		throw (GradeTooLowException());
}
