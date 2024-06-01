/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/05/03 13:51:16 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* stoi is used for string to integer conversion */

int main(void)
{
	Zombie			*horde;
	std::string 	user_input;
	int				N;
	int				i = 0;
	std::string 	name = "Zzzombie";

	std::cout << "Enter the amount of zombies N:\n >";
	std::getline(std::cin, user_input);
	N = std::stoi(user_input);
	horde = zombieHorde(N, name);
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	std::cout <<"Zombie horde of " << N << " got massacred.";
	std::cout << " You are the only survivor of the apocalypse. " << std::endl;
	return 0;
}