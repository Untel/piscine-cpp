/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:08:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 02:58:43 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int
    main(void)
{
    {
        list<int> lst = new list<int>(10, 0);

        lst->push_back(0);
        lst->push_back(10);
        lst->push_back(199);
        lst->push_back(-46);

        try {
            int found = easyfind<list<int>>(lst, 10);
            std::cout << "Finding elem" << found << std::endl;
        } catch (std::exeception &ex) {
            std::cout << "Fail to find elem" << std::endl;
        }
    }
    return 0;
}