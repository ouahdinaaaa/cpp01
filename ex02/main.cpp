/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:18:59 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/21 12:18:59 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>
# include <iostream>
# include <string>
# include <cstdlib>



int main(int argc, char **argv)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string &strREF = str;

    std::cout << "L'adresse de la string en memoire : "  << &str << std::endl;
    std::cout << "Adresse stockée dans string StringPTR : " << &strPTR << std::endl;
    std::cout << "L'adresse stockée dans stringREF : " << &strREF << std::endl;

    std::cout << "\n" << std::endl;
    std::cout << "My str : " << str << std::endl;
    std::cout << "La valeur pointer par strptr :" << *strPTR << std::endl;
    std::cout << "La valeur pointée par stringREF:" << strREF << std::endl;
    return (0);
}