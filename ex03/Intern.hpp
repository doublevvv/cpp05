/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:44:34 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/24 16:48:12 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
public:
	Intern();
	~Intern();
	Intern(std::string);
	Intern(Intern const &obj);
	Intern &operator=(const Intern &rhs);
	AForm	*makeForm(std::string, std::string); //*the first one represents the name of a form, and the
		//*second one represents the target of the form
	int	chooseform(std::string);
};

#endif
