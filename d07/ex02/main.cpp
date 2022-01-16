/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:08:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 02:35:08 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int
    main(void)
{
    {
        Array<int> *arr = new Array<int>(10);

        (*arr)[0] = 123456;
        (*arr)[1] = -1772;
        (*arr)[3] = 1;
        std::cout << "el idx 0 is => " << (*arr)[0] << std::endl;
        std::cout << "el idx 1 is => " << (*arr)[1] << std::endl;
        std::cout << "el idx 2 is => " << (*arr)[2] << std::endl;
        std::cout << "el idx 3 is => " << (*arr)[3] << std::endl;

        delete arr;
    }
    {
        Array<std::string> *arr = new Array<std::string>(10);

        (*arr)[0] = "Lol";
        (*arr)[1] = "Salut";
        (*arr)[3] = "Arg";
        std::cout << "el idx 0 is => " << (*arr)[0] << std::endl;
        std::cout << "el idx 1 is => " << (*arr)[1] << std::endl;
        std::cout << "el idx 2 is => " << (*arr)[2] << std::endl;
        std::cout << "el idx 3 is => " << (*arr)[3] << std::endl;

        delete arr;
    }
    return 0;
}