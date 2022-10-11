/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:51:21 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/11 13:43:28 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	Ice();
	Ice(Ice const &src);
	Ice &operator=(Ice const &rhs);
	~Ice();
	
	AMateria *clone() const;
	void use(ICharacter &target);
};
