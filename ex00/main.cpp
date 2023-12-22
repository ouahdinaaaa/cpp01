/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:32:26 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/22 12:31:29 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 1)
        return (std::cout << "Error of Argument\n", 1);
    
    Zombie *zombies1;
    
    zombies1 = newZombie("ouahdinaa");
    zombies1->announce();
    delete zombies1;
    randomChump("Zooooom");    
}