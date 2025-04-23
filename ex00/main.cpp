/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 08:30:17 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/23 10:57:56 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Vivi("Vivi", 150);
		Bureaucrat Eve("Eve", 1);
		std::cout << Vivi << std::endl;
		std::cout << Eve << std::endl;
		Vivi.increment();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		std::cout << std::endl;
		Bureaucrat Vivi("Vivi", 150);
		Bureaucrat Eve("Eve", 1);
		std::cout << Vivi << std::endl;
		Eve.increment();
		std::cout << Eve << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		std::cout << std::endl;
		Bureaucrat Vivi("Vivi", 150);
		Bureaucrat Eve("Eve", 0);
		std::cout << Vivi << std::endl;
		std::cout << Eve << std::endl;
		Vivi.increment();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		std::cout << std::endl;
		Bureaucrat Vivi("Vivi", 150);
		Bureaucrat Eve("Eve", -1);
		std::cout << Vivi << std::endl;
		std::cout << Eve << std::endl;
		Eve.decrement();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		std::cout << std::endl;
		Bureaucrat Vivi("Vivi", 155);
		Bureaucrat Eve("Eve", 0);
		std::cout << Vivi << std::endl;
		std::cout << Eve << std::endl;
		Vivi.increment();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
}
