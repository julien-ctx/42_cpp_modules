/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:16:47 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/18 15:29:33 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>

class Span
{
public:
	Span();
	Span(unsigned int n);
	Span(Span const &src);
	Span &operator=(Span const &rhs);
	~Span();
	
	void	addNumber(int nb);
	int		shortestSpan() const;
	int		longestSpan() const;

	// Accessors
	
	int 	getCurrSize() const;
	int 	getMaxSize() const;

	class TooMuchNumbers : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Warning: integer array is full!";
		}
	};
private: 
	std::vector<int> _array;
	unsigned int const _size;
};

std::ostream &operator<<(std::ostream &o, Span const &obj);
