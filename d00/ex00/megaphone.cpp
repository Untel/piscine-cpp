/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:24:31 by adda-sil       #+#    #+#             */
/*   Updated: 2021/10/10 12:24:31 by adda-sil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char *argv[]) {
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++) {
        for (int j = 0; j < (int)strlen(argv[i]); j++) {
            std::cout << (char)toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
    return (0);
}