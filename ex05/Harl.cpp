/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hearl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 04:48:46 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/23 04:48:46 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void    Harl::debug()
{
    std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !\n" << std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger ! If you did, I wouldn't be asking for more !\n" << std::endl;
}

void    Harl::warning()
{
    std::cout <<  "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error()
{
    std::cout << "This is unacceptable ! I want to speak to the manager now.\n" << std::endl;
}


void    Harl::complain(std::string level)
{
    int i = 0;
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*fonction[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    while (i < 4)
    {
        if (!str[i].compare(level))
           (this->*fonction[i])();
        i++;
    }

}