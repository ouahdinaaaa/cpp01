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

HumanB::HumanB(std::string name) : name(name), arme("hand")
{
}

HumanB::~HumanB()
{
}

void HumanB::attack() {
    std::cout << this->name << " attacks with :" << this->arme.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon name)
{
    this->arme = name;
}