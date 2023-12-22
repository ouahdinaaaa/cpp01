/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:22:49 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/22 12:28:00 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie  *zombie1 = new Zombie;
    zombie1->nommer(name);
    return (zombie1);
}