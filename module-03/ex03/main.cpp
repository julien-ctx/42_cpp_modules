/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:19:21 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/09 13:12:01 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap Tac("Tac");
	std::cout << Tac.getName() << "," << Tac.getEnergyPoints() << "," << Tac.getHitPoints() << "\n";
}
