/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 07:21:34 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/11 22:50:21 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int
    main(int ac, char **av)
{
    std::string filter(ac > 1 ? av[1] : "");
    Karen karen = Karen();

    switch (karen.getComplainIdx(filter)) {
        case DEBUG:
            karen.complain("DEBUG");
        case INFO:
            karen.complain("INFO");
        case WARNING:
            karen.complain("WARNING");
        case ERROR:
            karen.complain("ERROR");
            break;
        default:
            std::cout << BOLDMAGENTA;
            std::cout << "[ Probably complaining about insignificant problems ]";
            std::cout << RESET << std::endl;
            break;
    }
    return (0);
}