/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:44:53 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/10 16:07:57 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain: copy constructor called" << std::endl;
	*this = src;
}

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: destructor called" << std::endl;
}
