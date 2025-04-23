/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:14:19 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 14:45:48 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//Constructors
PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target)
{
    std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
	*this = obj;
}

//Operator Overload
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	std::cout << "PresidentialPardonForm Copy Assignment Operator called" << std::endl;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > 5)
		throw (GradeTooLowException());
	else if (getSigned() != true)
		std::cout << "the form isn't signed" << std::endl;
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::ostream	&operator<< (std::ostream &out, AForm const &value)
{
	// return (out << value.getName() << ", AForm grade_executed " << value.getGrade_executed()
	// 			<< ", AForm grade signed" << value.getGrade_signed());
	return (out << value.getName() << ", bureaucrat grade " << value.getGrade_executed());
}
