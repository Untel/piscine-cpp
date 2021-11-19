/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: commetuveux <commetuveux@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:50:55 by commetuveux       #+#    #+#             */
/*   Updated: 2021/11/04 18:52:01 by commetuveux      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
    // std::cout << "Mount " << this->first_name << std::endl;
}

Contact::~Contact() {
    std::cout << "Destroy" << std::endl;
}

int Contact::init() {
    std::cout << "first name: ";
    std::cin >> this->first_name;
    std::cout << "last name: ";
    std::cin >> this->last_name;
    std::cout << "nickname: ";
    std::cin >> this->nickname;
    std::cout << "phone number: ";
    std::cin >> this->phone_number;
    std::cout << "darkest secret: ";
    std::cin >> this->darkest_secret;
    Contact::count += 1;
    return (1);
}

int Contact::count = 0;