/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:51:16 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 11:18:06 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdbool.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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

	Form();
	~Form();
	Form(std::string name, int, int);
	Form(const Form &obj);
	Form &operator=(const Form &rhs);
	std::string	getName() const;
	int	getGrade_executed() const;
	int	getGrade_signed() const;
	void	beSigned(Bureaucrat const &bureaucrat);
		// * It changes the form’s status to signed if the bureaucrat’s grade is high enough
		// *If the grade is too low, throw a Form::GradeTooLowException

private:
	const std::string _name;
	bool _signed;
	const int	_grade_signed;
	const int	_grade_executed;
};

std::ostream	&operator<< (std::ostream &out, Form const &value);

#endif
