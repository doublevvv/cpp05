/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:45:37 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 14:43:56 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
	class GradeTooHighException : public std::exception
		{
		public:
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		public:
			virtual const char* what() const throw();
		};

	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(RobotomyRequestForm const &obj);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	virtual void	execute(Bureaucrat const &executor) const;


private:
	const std::string	_target;
};

std::ostream	&operator<< (std::ostream &out, Bureaucrat const &value);

#endif
