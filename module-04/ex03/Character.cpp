/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:23:39 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/11 14:40:16 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_inventory[0] = NULL;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character	&Character::operator=(Character const &rhs)
{
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
			if (i++ < 3)
				this->_inventory[i] = NULL;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	AMateria *new_inv[4];
	
	int i = 0;
	for (i = 0; this->_inventory[i]; i++)
		new_inv[i] = this->_inventory[i];
	new_inv[i] = NULL;
	if (idx <= 3 && idx >= 0)
	{
		for (int i = 0; this->_inventory[i]; i++)
		{
			if (i == idx)
				continue;
			else
				this->_inventory[i] = new_inv[i];
		}
		this->_inventory[i] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx <= 3 && idx >= 0)
		for (int i = 0; this->_inventory[i]; i++)
			if (idx = i)
				this->_inventory[i]->use(target);
}
