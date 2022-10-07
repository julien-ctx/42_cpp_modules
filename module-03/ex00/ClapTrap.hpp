/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:07:33 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/07 12:21:57 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string str);
	ClapTrap(ClapTrap const &src); // Copy constructor
	ClapTrap &operator=(ClapTrap const &rhs); // Affectation operator
	~ClapTrap();

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amout);
private:
	std::string _name;
	int	_hitPoints;
	int _energyPoints;
	int	_attackDamage;
};
