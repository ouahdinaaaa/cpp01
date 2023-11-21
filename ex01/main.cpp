/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:56:02 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/21 11:59:45 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    if (argc != 1)
        return (std::cout << "Error of Argument\n", 1);
    Zombie  *horde;
    horde = zombieHorde(7, "zombiiiiie");
    int nb = 7;
    while (nb-- > 0)
        horde[nb].announce();
    delete[]horde;
    return (0);
}