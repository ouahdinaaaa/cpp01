/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:01:45 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/21 13:01:45 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP


# include <iomanip>
# include <iostream>
# include <string>
# include <cstdlib>

class Weapon
{
    private:
    std::string type;

    public:

    Weapon(std::string type);
    ~Weapon();
    std::string const    &getType();
    void    setType(std::string type);
};



# endif