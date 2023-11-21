/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:15:39 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/21 09:14:31 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <cstdlib>

class	Zombie
{
    private :
	std::string	name;
	
	public :
	Zombie();
	~Zombie();
    void    announce(void);
	void	nommer(std::string name);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif