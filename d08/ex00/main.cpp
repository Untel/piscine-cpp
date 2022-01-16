/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:08:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 07:54:16 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <deque>

int
    main(void)
{
    {
        std::list<int> lst;

        lst.push_back(0);
        lst.push_back(10);
        lst.push_back(199);
        lst.push_back(-46);

        try {
            int found = easyfind(lst, 10);
            std::cout << "Finding elem " << found << std::endl;
        } catch (std::exception &ex) {
            std::cout << "Fail to find elem" << std::endl;
        }
    }
    {
        std::vector<float> lst;

        lst.push_back(0.0f);
        lst.push_back(10.0f);
        lst.push_back(199.4f);
        lst.push_back(-46.f);

        try {
            int found = easyfind(lst, -46);
            std::cout << "Finding elem " << found << std::endl;
        } catch (std::exception &ex) {
            std::cout << "Fail to find elem" << std::endl;
        }
    }
    {
        std::deque<double> lst;

        lst.push_back(0.0);
        lst.push_back(10.0);
        lst.push_back(199.4);
        lst.push_back(-46.);

        try {
            int found = easyfind< std::deque<double> >(lst, -46);
            std::cout << "Finding elem " << found << std::endl;
        } catch (std::exception &ex) {
            std::cout << "Fail to find elem" << std::endl;
        }
    }
    return 0;
}