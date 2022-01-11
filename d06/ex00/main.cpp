/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:08:19 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/11 18:56:29 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>

bool is_double(std::string value) {

}

int
    main(int ac, char **av)
{
    if (ac != 2) {
        std::cout << "Error: Usage: scalar <str>" << std::endl;
        return (EXIT_FAILURE);
    }
    std::string literal(av[1]);
    std::cout << "Literal <str>" << literal << std::endl;
    return (EXIT_SUCCESS);
}
