/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:44:44 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/11 19:09:50 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"

class	HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanB(std::string name);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon &weapon);
};

#endif