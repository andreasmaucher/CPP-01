/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/05/02 20:41:00 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* first memory is allocated on the heap, pointer zombie points to the location
where the object is stored; "delete" frees the pointer;
randomChump creates an object on the stack which is automatically deallocated
when the scope in which it was declared ends */

int main(void)
{
	Zombie *zombie;

	zombie = newZombie("Foo Heap");
	zombie->announce();

	delete zombie;

	randomChump("Bar Stack");

	return 0;
}