/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:27:11 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/11 17:33:29 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = (!rhs._inventory[i]) ? NULL : rhs._inventory[i];
	return *this;
}

MateriaSource::~MateriaSource() {}


void MateriaSource::learnMateria(AMateria *src)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = src;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	if (type != "ice" && type != "cure")
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i]->getType() == type)
				return this->_inventory[i];
		}
		return 0;
	}
	else
		return 0;
}
