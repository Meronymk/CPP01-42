/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:48:44 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/11 17:52:27 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->_name = name;
	std::cout << this->_name << ": Created" << std::endl;
}
Zombie::~Zombie(){

	std::cout << this->_name << ": Destroyed" << std::endl;
}

std::string Zombie::getName( void )
{
	return(_name);
}

void Zombie::setName( std::string name )
{
	_name = name;
}

void Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
