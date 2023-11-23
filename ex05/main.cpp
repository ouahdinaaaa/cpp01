/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 06:26:53 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/23 06:26:53 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::string	list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl		harl;
	int		i = 0;

	while(i < 4)
		harl.complain(list[i++]);
	return (0);
}