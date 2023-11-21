/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:17:31 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/21 13:17:31 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    std::cout << this->name << "Attack with :" << this->name.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon name)
{
    this->name = name;
}