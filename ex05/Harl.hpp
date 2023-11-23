/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hearl.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 04:46:46 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/23 04:46:46 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <fcntl.h>
# include <fstream>


class   Harl
{
    private :

    void    info(void);
    void    error(void);
    void    debug(void);
    void    warning(void);

    public  :

    Harl();
    ~Harl();
    void    complain(std::string level);  
};

#endif 