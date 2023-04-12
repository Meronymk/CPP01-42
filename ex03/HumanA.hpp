/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:44:19 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/11 19:13:14 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__


# include "Weapon.hpp"

class HumanA{
private:
	std::string	_name;
	Weapon		&_weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);
	void	setWeapon(Weapon weapon);
};

#endif