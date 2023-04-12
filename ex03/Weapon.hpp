/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:45:03 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/11 19:07:20 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

# include <iostream>

class Weapon {
private:
	std::string	_type;
public:
	Weapon(std::string type);
	~Weapon(void);
	const std::string&	getType(void);
	void		setType(std::string type);
};

#endif