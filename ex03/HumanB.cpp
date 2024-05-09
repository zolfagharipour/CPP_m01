/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:04:07 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/09 13:04:53 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}


void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(const Weapon& weapon)
{
    this->_weapon = &weapon;
}
