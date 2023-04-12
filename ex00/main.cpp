/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:48:22 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/11 17:55:17 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);

int main(void)
{
	Zombie *test = newZombie("Bertin");
	test->announce();
	randomChump("Joey");
	randomChump("Donalda");
	delete test;
}