/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:25:04 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/21 09:15:47 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie:: Zombie()
{
    
}

Zombie:: ~Zombie()
{
    std::cout << "Zombie : " << this->name << " destroyed!\n" << std::endl;
}


void    Zombie::nommer(std::string name){
    this->name = name;    
}

void    Zombie:: announce(void){
    std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

