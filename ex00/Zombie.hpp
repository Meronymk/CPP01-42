/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:48:54 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/11 17:56:02 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string>
#include <iostream>

class Zombie {
public:
	Zombie( std::string name );
	~Zombie();
	std::string getName( void );
	void setName( std::string name );
	void announce( void );

private:
	std::string _name;
};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

#endif