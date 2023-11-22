/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:03:16 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/21 13:03:16 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
    setType(type);
}

Weapon::~Weapon()
{
}


std::string const &Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string type){
    this->type = type;
}