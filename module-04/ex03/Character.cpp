/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:23:39 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/11 21:19:09 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character	&Character::operator=(Character const &rhs)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = (!rhs._inventory[i]) ? NULL : rhs._inventory[i];
	return *this;
}

Character::~Character() {}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx <= 3 && idx >= 0)
		if (this->_inventory[idx])
			this->_inventory[idx]->use(target);
}

std::string const &Character::getName() const
{
	return this->_name;
}