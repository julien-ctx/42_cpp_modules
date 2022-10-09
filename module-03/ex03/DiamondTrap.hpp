/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:38:09 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/09 12:45:56 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &src);
	DiamondTrap &operator=(DiamondTrap const &rhs);
	~DiamondTrap();

	void	whoAmI();
private:
	std::string _name;
};
