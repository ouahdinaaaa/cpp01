/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:13:25 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/21 13:13:25 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arme): name(name)
{
        this->arme = &arme;
}

HumanA::~HumanA()
{

}

void    HumanA::attack()
{
    if (this->arme->getType() == "")
        std::cout << this->name << "Attack with : hand" << std::endl;
    else
        std::cout << this->name << "Attack with : " << this->arme->getType() << std::endl;
}

void    HumanA::setWeapon(Weapon &arme)
{
    this->arme = &arme;
}