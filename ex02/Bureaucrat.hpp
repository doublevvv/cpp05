/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:24:39 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 14:16:07 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
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

	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string, int);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	std::string	getName() const;
	int	getGrade() const;
	void	increment(void);
	void	decrement(void);
	void	signForm(AForm &form); //* must call Form::beSigned() to attempt to sign the form
	void	executeForm(AForm const &form) const;

private:
	const std::string	_name;
	int	_grade;
};

std::ostream	&operator<< (std::ostream &out, Bureaucrat const &value);

#endif
