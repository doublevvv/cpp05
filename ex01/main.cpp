/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 08:30:17 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 11:16:27 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat Vivi("Vivi", 150);
		Bureaucrat Eve("Eve", 1);
		Form form("hello", 2, 5);
		Eve.signForm(form);
		std::cout << Vivi << std::endl;
		std::cout << Eve << std::endl;
		// Vivi.increment();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		std::cout << std::endl;
		Bureaucrat Vivi("Vivi", 141);
		Bureaucrat Eve("Eve", 3);
		Form form("hello", 140, 5);
		Vivi.signForm(form);
		Vivi.increment();
		std::cout << Vivi << std::endl;
		std::cout << Eve << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		std::cout << std::endl;
		Bureaucrat Vivi("Vivi", 145);
		Bureaucrat Eve("Eve", 5);
		Form form("hello", 145, 5);
		// Vivi.increment();
		Vivi.signForm(form);
		std::cout << Vivi << std::endl;
		std::cout << Eve << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}

}
