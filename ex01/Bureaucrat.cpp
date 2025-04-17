/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:27:22 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/17 17:29:50 by vlaggoun         ###   ########.fr       */
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
	std::cout << "Parameter constructor was called" << std::endl;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Default destructor was called" << std::endl;

}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	this->_name = obj._name;
	this->_grade = obj._grade;
	*this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs) {
	}
	return *this;
}

void	Bureaucrat::increment()
{
	_grade++;
}
void	Bureaucrat::decrement()
{
	_grade--;
}
