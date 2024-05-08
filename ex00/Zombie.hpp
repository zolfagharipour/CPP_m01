/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:28:02 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/08 14:58:13 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:

	std::string		_name;
public:

	Zombie(void);
	~Zombie(void);
	void	announce(void);
	void	setName(std::string name);
};

Zombie*	newZombie(std::string name);
void randomChump(std::string name);

#endif