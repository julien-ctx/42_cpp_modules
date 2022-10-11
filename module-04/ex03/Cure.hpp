/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:19:26 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/11 12:03:52 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	Cure();
	~Cure();
	Cure(Cure const &src);
	Cure &operator=(Cure const &rhs);
	
	AMateria *clone() const;
	void use(ICharacter &target);
};
