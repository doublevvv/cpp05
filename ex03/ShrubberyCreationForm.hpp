/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubbberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:46:57 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 14:32:09 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBbBERY_CREATION_FORM_HPP
#define SHRUBbBERY_CREATION_FORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:

	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(ShrubberyCreationForm const &obj);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
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
