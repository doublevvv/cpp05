/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:43:03 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/24 12:38:41 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
	// class GradeTooHighException : public std::exception
	// {
	// public:
	// 	virtual const char* what() const throw();
	// };

	// class GradeTooLowException : public std::exception
	// {
	// public:
	// 	virtual const char* what() const throw();
	// };

	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(PresidentialPardonForm const &obj);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	virtual void	execute(Bureaucrat const &executor) const;
	std::string	getTarget(void);
	virtual std::string	getName() const;


private:
	const std::string	_target;
	const std::string	_name;
	const int	_grade_signed;
	const int	_grade_executed;
};

std::ostream	&operator<< (std::ostream &out, Bureaucrat const &value);

#endif
