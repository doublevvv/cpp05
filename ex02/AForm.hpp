/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:51:16 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 14:21:06 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdbool.h>
#include "Bureaucrat.hpp"

#ifndef FORM_HPP
#define FORM_HPP


class Bureaucrat;

class AForm
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

	AForm();
	~AForm();
	AForm(std::string name, int, int);
	AForm(const AForm &obj);
	AForm &operator=(const AForm &rhs);
	std::string	getName() const;
	int	getGrade_executed() const;
	int	getGrade_signed() const;
	void	beSigned(Bureaucrat const &bureaucrat);
	bool	getSigned() const;
	virtual void	execute(Bureaucrat const &executor) const = 0;

private:
	const std::string _name;
	bool _signed;
	const int	_grade_signed;
	const int	_grade_executed;
};

std::ostream	&operator<< (std::ostream &out, AForm const &value);

#endif
