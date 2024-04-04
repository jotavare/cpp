/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:59:41 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/04 18:09:14 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Need arguments > ./harl [DEBUG/INFO/WARNING/ERROR]" << std::endl;
        return (1);
    }

    Harl harl;
    harl.complain(argv[1]);
    return (0);
}
