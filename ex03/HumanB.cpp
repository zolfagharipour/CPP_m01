/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:04:07 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/08 21:44:16 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
}


void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    _weapon = &weapon;
}
