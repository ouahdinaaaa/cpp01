/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:16:50 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/22 16:51:03 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <fcntl.h>
# include <fstream>

std::string modification(std::string line, std::string s1, std::string s2)
{
    size_t      pos;
    size_t      len;

    len = line.length();
    pos = line.find(s2);
    line.erase(pos, len);
    line.insert(pos, s2);
    
    return line;
}

int main(int argc, char **argv)
{
    std::string s1 = "";
    std::string s2 = "";

    if (argc != 4)
        return (std::cout << "Error of arg" << std::endl, 1);
    std::string file = std::string(argv[1]) + ".replace";
    std::string line;
    
    std::ifstream fd(argv[1]);
    std::ofstream fd1(file);

    s1 = argv[2];
    s2 = argv[3];
    if (!fd.is_open() || !fd1.is_open())
        return (std::cout << "Error of file" << std::endl, 1);
    while (std::getline(fd, line))
    {
        line = modification(line, s1, s2);
        std::cout << "line recuperer : " << line << std::endl;
    }
    fd.close();
    fd1.close();
    return (0);
}

// erase
// insert
// find