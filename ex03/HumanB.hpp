/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.B.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:15:59 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/21 13:15:59 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <cstdlib>
# include  "Weapon.hpp"


class HumanB
{
    private:
    Weapon *arme;
    std::string name;

public:
    
    HumanB(std::string type);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon &arme);
};


#endif