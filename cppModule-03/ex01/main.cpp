/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:37:07 by rde-fari          #+#    #+#             */
/*   Updated: 2025/11/10 00:03:32 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

static void sep(const char *title)
{
	std::cout << std::endl
		<< "==================== "
		<< title
		<< " ===================="
		<< std::endl;
}

int main(void)
{
	{
		sep("SCAV TEST");
		ClapTrap clap1;
		ScavTrap scav1("scav1");
		clap1.setName("Clap1");
		clap1.setHitPoints(1);
		scav1.attack(clap1.getName());
		clap1.takeDamage(scav1.getAttackDamage());
		return 0;
	}
}
