/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: commetuveux <commetuveux@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:23:39 by commetuveux       #+#    #+#             */
/*   Updated: 2021/10/10 13:34:13 by commetuveux      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
    std::cout << "COMMANDS: ADD, SEARCH, EXIT" << std::endl;

    std::string str;
    
    std::cin >> str;
    std::cout << "You typed: " << str << std::endl;
}