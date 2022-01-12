/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:08:19 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/12 04:24:52 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include "ScalarConversion.hpp"

int
    main(int ac, char **av)
{
    if (ac != 2) {
        std::cout << "Error: Usage: scalar <int|double|float|char>" << std::endl;
        return (EXIT_FAILURE);
    }
    std::string literal(av[1]);
    try {
        ScalarConversion scal = ScalarConversion(literal);
        std::cout << scal;
    } catch (std::string ex) {
        std::cout << ex << std::endl;
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}
