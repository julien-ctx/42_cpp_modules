/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliencaucheteux <juliencaucheteux@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:28:18 by juliencauch       #+#    #+#             */
/*   Updated: 2022/10/13 17:31:29 by juliencauch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Unknown"), _sign(false), _signGrade(-42), _execGrade(-42)
{
	std::cout << "Form: Warning: default constructor has been called and grades have been set to -42\n";
}



Form::~Form() {}
