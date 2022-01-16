/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:08:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 02:00:46 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void
    myPrint(int const & el) {
    std::cout << "Iter => " << el << std::endl;
}
void
    myPrint(std::string const & el) {
    std::cout << "Iter str => " << el << std::endl;
}

int
    main(void)
{
    int ints[4] = { 0, 1, 2, 5 };
    std::string strs[4] = { "abc", "def", "hij", "klm" };

    // ::iter<int>((int *)ints, (size_t)4, (void (*)(int const & el))myPrint);
    ::iter<int>((int *)ints, (size_t)4, myPrint);
    ::iter<std::string>((std::string *)strs, (size_t)4, myPrint);
    return 0;
}