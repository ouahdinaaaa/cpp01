/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:22:49 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/21 09:15:01 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie  *Zombie1 = new Zombie;
    Zombie1->nommer(name);
    return (Zombie1);
}