/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:44:11 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/11 19:13:25 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "HumanA " << name << " created with ";
	std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->_name << " destroyed" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << \
		this->_weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}