/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: commetuveux <commetuveux@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:50:55 by commetuveux       #+#    #+#             */
/*   Updated: 2021/10/17 23:50:39 by commetuveux      ###   ########.fr       */
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
    std::cout << "login: ";
    std::cin >> this->login;
    std::cout << "postal address: ";
    std::cin >> this->postal_address;
    std::cout << "birthday date: ";
    std::cin >> this->birthday_date;

    Contact::count += 1;
    return (1);
}

int Contact::count = 0;