/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:01:34 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/11 18:29:22 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int main(int argv, char **argc)
{
	if (argv != 3 || std::isalpha(argc[1][0]))
	{
		std::cout << "Error: Need Number and Name" << std::endl;
	}
	else
	{
	int	size = std::atoi(argc[1]);
	std::string name = argc[2];
	
	Zombie *horde = zombieHorde(size, name);
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
	}
}