/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/04/20 21:11:26 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

#include <iostream>
#include <string>

/* private variables always with an underscore */

class Weapon
{
	private:
		std::string _type;
	
	public:
		Weapon();
		~Weapon(void);
		Weapon(std::string type);
		std::string const &getType(void) const;
		void setType(std::string type);
};

#endif