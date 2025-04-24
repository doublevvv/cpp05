/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:18:16 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/24 13:34:02 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//Constructors
RobotomyRequestForm::RobotomyRequestForm() : _name("RobotomyRequestForm"), _grade_signed(25), _grade_executed(5)
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target), _name("PresidentialPardonForm"),  _grade_signed(25), _grade_executed(5)
{
    std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : _name("PresidentialPardonForm"), _grade_signed(obj._grade_signed), _grade_executed(obj._grade_executed)
{
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
	*this = obj;
}
//Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout <<  "RobotomyRequestForm Destructor called " << std::endl;
}

//Operator Overload
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	std::cout << "RobotomyRequestForm Copy Assignment Operator called" << std::endl;
	return *this;
}

std::string	RobotomyRequestForm::getName() const
{
	return (this->_name);
}

std::string	RobotomyRequestForm::getTarget()
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int i = 2;
	if (executor.getGrade() > 45)
		throw (GradeTooLowException());
	else if (getSigned() != true)
		std::cout << "the form isn't signed" << std::endl;
	else if (i % 2 == 0)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << "robotomy has failed" << std::endl;
}

// std::ostream	&operator<< (std::ostream &out, AForm const &value)
// {
// 	// return (out << value.getName() << ", AForm grade_executed " << value.getGrade_executed()
// 	// 			<< ", AForm grade signed" << value.getGrade_signed());
// 	return (out << value.getName() << ", bureaucrat grade " << value.getGrade_executed());
// }
