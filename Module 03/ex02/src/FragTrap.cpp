/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:34:28 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/18 01:33:41 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap() 
{
	std::cout << "FragTrap : Default Constructor Called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap : Parameterized Constructor Called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &obj )
{
	std::cout << "FragTrap : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destructor Called" << std::endl;
}

FragTrap&	FragTrap::operator = (const FragTrap &rhs )
{
	std::cout << "FragTrap : Copy Assignment Operator Called" << std::endl;
	if (this != &rhs)
	{
		this->mName = rhs.mName;
		this->mHitPoints = rhs.mHitPoints;
		this->mEnergyPoints = rhs.mEnergyPoints;
		this->mAttackDamage = rhs.mAttackDamage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap : " << this->mName << " Yes ✋" << std::endl;
}
