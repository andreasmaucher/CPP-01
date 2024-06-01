/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/04/19 21:45:24 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* constructor function for the zombie class;
initializes the name attribute of the Zombie object with the provided name
using the member initializer list name(name);
the constructor does not return anything */

Zombie::Zombie(std::string const &name) : name(name)
{
	return;
}

/* destructor for the zombie class;
automatically called when a Zombie object goes out of scope or when delete
is called on a pointer to a Zombie object*/

Zombie::~Zombie(void)
{
	std::cout << "Zombie \"" << this->name;
	std::cout << "\" has been destroyed !" << std::endl;

	return;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiinnnzzzZ..." << std::endl;

	return;
}