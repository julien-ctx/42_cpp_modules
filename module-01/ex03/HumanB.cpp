/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:33:38 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/02 14:15:01 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
}
