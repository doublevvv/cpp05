/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:18:16 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 14:52:24 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//Constructors
RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target)
{
    std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
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

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int i = 0;

	if (executor.getGrade() > 45)
		throw (GradeTooLowException());
	else if (getSigned() != true)
		std::cout << "the form isn't signed" << std::endl;
	else if (std::rand() % 2 == 0)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << "robotomy has failed" << std::endl;
}

std::ostream	&operator<< (std::ostream &out, AForm const &value)
{
	// return (out << value.getName() << ", AForm grade_executed " << value.getGrade_executed()
	// 			<< ", AForm grade signed" << value.getGrade_signed());
	return (out << value.getName() << ", bureaucrat grade " << value.getGrade_executed());
}
