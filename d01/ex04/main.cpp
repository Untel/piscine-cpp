/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 07:21:34 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/01 07:52:06 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

int
    main(int ac, char **av)
{
    if (ac < 2)
        return 1;

    std::string     in_file(av[1]);
    std::string     out_file(in_file + ".replace");

    std::ifstream   reader(av[1]);
    if (reader.fail())
        std::cout << "Fail to open file " << in_file << std::endl;
    
    std::cout << "open? " << reader.is_open() << std::endl;
    std::cout << "fail? " << reader.fail() << std::endl;
}