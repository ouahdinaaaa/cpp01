/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:32:26 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/20 21:28:30 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    if (argc != 1)
        return (std::cout << "Error of Argument\n", 1);
    
    Zombie *zombies1;
    zombies1 = newZombie("ouahdinaa");
    zombies1->announce();
    delete zombies1;

    //faire pour la stack
    
}