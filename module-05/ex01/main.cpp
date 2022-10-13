/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliencaucheteux <juliencaucheteux@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:30:24 by juliencauch       #+#    #+#             */
/*   Updated: 2022/10/13 20:48:07 by juliencauch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// try
	// {
	// 	Form Tac("Tac", 151, 25);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// std::cout << std::endl;
	// try
	// {
	// 	Form Yoshi("Yoshi", 150, 0);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// std::cout << std::endl;
	// try
	// {
	// 	Form Palmi("Palmi", 42, 42);
	// 	std::cout << Palmi;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	
	Form Document("Document", 15, 15);
	std::cout << Document;
	Bureaucrat Tac("Tac", 16);
	std::cout << Tac;
	Tac.signForm(Document);
	Tac.incrementGrade(1);
	std::cout << Tac;
	Tac.signForm(Document);
	std::cout << Document;
	return 0;
}
