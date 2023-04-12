/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:24:16 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/11 20:32:39 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

# include <iostream>
# include <string>

class Harl{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	void complain( std::string level );
};

#endif