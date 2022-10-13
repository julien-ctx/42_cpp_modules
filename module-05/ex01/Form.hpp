/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliencaucheteux <juliencaucheteux@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:23:48 by juliencauch       #+#    #+#             */
/*   Updated: 2022/10/13 17:30:28 by juliencauch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Form
{
public:
	Form();
	Form(Form const &src);
	Form &operator=(Form const &rhs);
	~Form();

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Grade is to HIGH! Value range: [1, 150]";
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Grade is to LOW! Value range: [1, 150]";
		}	
	};	
	class GradeNotSet : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Grade has not been set correctly. Please use the appropriate constructor.";
		}
	};
private:
	std::string const _name;
	bool _sign;
	int	const _signGrade;
	int	const _execGrade;
};
