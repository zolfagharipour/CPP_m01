/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:28:47 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/08 16:54:21 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon*		_weapon;
public:
	HumanA(std::string name, Weapon weapon());
	~HumanA();
	void	attack(void);
};


HumanA::HumanA(std::string name, Weapon weapon())
{
	_name = name;
	_weapon = weapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

#endif