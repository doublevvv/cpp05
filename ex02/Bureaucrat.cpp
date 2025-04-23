/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:27:22 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 14:27:33 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Constructors
Bureaucrat::Bureaucrat() : _grade(150)
{
	std::cout << "Default constructor was called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	std::cout << "Parameter constructor was called" << std::endl;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Default destructor was called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	this->_grade = obj._grade;
	*this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

void	Bureaucrat::increment()
{
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();

}
void	Bureaucrat::decrement()
{
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error : grade is too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error : grade is too low\n");
}

std::ostream	&operator<< (std::ostream &out, Bureaucrat const &value)
{
	return out << value.getName() << ", bureaucrat grade " << value.getGrade();
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << _name<< " couldn't sign form " << form.getName() <<  " because " << e.what();
	}

}

void	Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed" << form.getName();
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " couldn't execute form : " << form.getName();
	}

}

