/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:33:04 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/12 11:26:48 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const &src)
{
	*this = src;
}

Cure	&Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Cure::~Cure() {}

AMateria *Cure::clone() const
{
	Cure *dup = new Cure();
	
	return dup;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wonds *" << std::endl;
}
