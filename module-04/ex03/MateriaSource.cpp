/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:27:11 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/12 13:33:12 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
		{
			if (src._inventory[i]->getType() == "ice")
				this->_inventory[i] = new Ice();
			else if (src._inventory[i]->getType() == "cure")
				this->_inventory[i] = new Cure();
		}
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = (!rhs._inventory[i]) ? NULL : rhs._inventory[i];
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}


void MateriaSource::learnMateria(AMateria *src)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = src;
			return;
		}
	}
	delete src;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice" || type == "cure")
		for (int i = 0; i < 4; i++)
			if (this->_inventory[i])
				if (this->_inventory[i]->getType() == type)
					return this->_inventory[i];
	return 0;
}
