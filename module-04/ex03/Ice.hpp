/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:51:21 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/11 10:19:07 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
	Ice();
	~Ice();
	Ice(Ice const &src);
	Ice &operator=(Ice const &rhs);
	
	AMateria *clone() const;
	void use(ICharacter &target);
};
