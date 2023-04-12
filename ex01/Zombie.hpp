/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:04:23 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/11 18:23:17 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string>
#include <iostream>

class Zombie {
public:
	Zombie( std::string name );
	Zombie( void );
	~Zombie();
	std::string getName( void );
	void setName( std::string name );
	void announce( void );

private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
