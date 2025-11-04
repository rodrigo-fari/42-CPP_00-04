/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:07:41 by rde-fari          #+#    #+#             */
/*   Updated: 2025/11/04 17:13:01 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <cctype>
# include <iostream>
# include <sstream>

class ClapTrap {
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

		public:
		//Orthodox Canonical Form (OCF)
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		~ClapTrap();
		ClapTrap&	operator=( const ClapTrap& other );

		//Methods
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		//Getters
		std::string	getName();
		int			getHitPoints();
		int			getEnergyPints();
		int			getAttackDamage();

		//Setters
		void		setName(std::string name);
		void		setHitPoints(int hitPoints);
		void		setEnergyPints(int energyPoints);
		void		setAttackDamage(int attackDamage);
};

#endif