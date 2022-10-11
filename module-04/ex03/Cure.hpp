/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:19:26 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/11 13:43:23 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	Cure();
	Cure(Cure const &src);
	Cure &operator=(Cure const &rhs);
	~Cure();
	
	AMateria *clone() const;
	void use(ICharacter &target);
};
