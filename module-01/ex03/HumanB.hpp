/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:47:57 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/02 11:09:59 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon Weapon);
private:
	Weapon		weapon;
	std::string	name;
};
