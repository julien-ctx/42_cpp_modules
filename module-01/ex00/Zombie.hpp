/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:14:18 by jcauchet          #+#    #+#             */
/*   Updated: 2022/09/30 10:25:20 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
public:
	Zombie();
	~Zombie();
	void 	announce(void);
	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);
private:
	std::string name;
};
