/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:23:54 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/11 21:18:04 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: please select; DEBUG - INFO - WARNING - ERROR" << std::endl;
	}
	else
	{
	Harl test;
	test.complain( argv[1] );
	}
	return 0;
}