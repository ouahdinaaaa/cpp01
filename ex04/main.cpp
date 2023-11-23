/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:16:50 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/23 04:12:01 by ayael-ou         ###   ########.fr       */
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
    size_t      pos = line.find(s1);
    size_t      len;

    len = s1.length();
    while (pos != std::string::npos)
    {
        line.erase(pos, len);
        line.insert(pos, s2);
        pos = line.find(s1, pos + s2.length());
    }
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
        if (!line.empty())
            line = modification(line, s1, s2);
        fd1 << line << std::endl;
    }
    fd.close();
    fd1.close();
    return (0);
}