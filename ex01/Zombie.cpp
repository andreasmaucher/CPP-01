/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/04/20 15:44:34 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* constructor definition for the zombie class with no parameters */

Zombie::Zombie() : _name("Zombie")
{
	return ;
}

/* destructor for the zombie class;
automatically called when a Zombie object goes out of scope or when delete
is called on a pointer to a Zombie object*/

Zombie::~Zombie(void)
{
	std::cout << "Zombie \"" << this->_name;
	std::cout << "\" has been destroyed !" << std::endl;

	return;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiinnnzzzZ..." << std::endl;

	return;
}

void Zombie::nameZombie(std::string name)
{
	_name = name;
}