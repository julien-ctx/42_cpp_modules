/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:38:23 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/09 13:21:04 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name), _name(name)
{
	this->_hitPoints = ClapTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap: Constructor with name called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Default destructor called" << std::endl;
}

void	whoAmI()
{
}
