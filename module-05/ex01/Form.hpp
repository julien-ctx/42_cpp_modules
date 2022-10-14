/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:23:48 by juliencauch       #+#    #+#             */
/*   Updated: 2022/10/14 14:36:08 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	Form(std::string name, int signGrade, int execGrade);
	Form(Form const &src);
	Form &operator=(Form const &rhs);
	~Form();

	// Accessors
	std::string const getName() const;
	bool	getSign() const;
	int		getSignGrade() const;
	int		getExecGrade() const;

	void	beSigned(Bureaucrat const &obj);

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
			return "Form: Grade is to LOW! Value range: [1, 150]";
		}	
	};	
private:
	std::string const _name;
	bool _sign;
	int	const _signGrade;
	int	const _execGrade;

	int	checkValue(int n) const;
};


std::ostream &operator<<(std::ostream &o, Form const &obj);
