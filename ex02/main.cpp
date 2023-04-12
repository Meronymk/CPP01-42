/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:31:00 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/11 18:41:43 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "addresse STR: " << &brain << std::endl;
	std::cout << "addresse PTR: " << &stringPTR << std::endl;
	std::cout << "addresse REF: " << &stringREF << std::endl;

	std::cout << "valeur STR: " << brain << std::endl;
	std::cout << "valeur PTR: " << stringPTR << std::endl;
	std::cout << "addresse REF: " << stringREF << std::endl;
}