/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:24:49 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/21 13:24:49 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <cstdlib>
# include  "Weapon.hpp"


class HUMANB
{
    private :
    
    std::string name;
    Weapon  arme;

    public :

    HumanA(std::string name, Weapon arme);
    ~HumanA();
    void    attack();
    void    setWeapon(Weapon arme);
}

#endif