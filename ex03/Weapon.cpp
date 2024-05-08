/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:23:29 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/08 21:40:14 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	_type = name;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void)
{
	const std::string& ref = _type;
	return (ref);
}

void	Weapon::setType(std::string name)
{
	_type = name;
}
