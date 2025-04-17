/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:24:39 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/17 17:27:18 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>


class Bureaucrat
{
public:
	~Bureaucrat();
	Bureaucrat(std::string, int);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	void	getName();
	void	getGrade();
	void	increment(void);
	void	decrement(void);

private:
	Bureaucrat();
	const std::string	_name;
	int	_grade;
};

std::ostream	&operator<< (std::ostream &out, Bureaucrat const &value);

#endif
