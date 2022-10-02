/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:44:00 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/02 12:21:17 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack();
private:
	Weapon		weapon;
	std::string	name;
};
