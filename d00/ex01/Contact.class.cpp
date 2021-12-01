/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:50:55 by commetuveux       #+#    #+#             */
/*   Updated: 2021/11/20 19:50:17 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
# include <iostream>

Contact::Contact()
{
    std::cout << "Mount " << this->first_name << std::endl;
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
    if (Contact::count < 8) {
        Contact::count += 1;
    }
    return (1);
}

int Contact::autofill() {
    char str[2];

    str[0] = Contact::count + '0';
    str[1] = 0;
    this->first_name.assign("first_").append(str);
    this->last_name.assign("last_").append(str);
    this->nickname.assign("nick_").append(str);
    this->phone_number.assign("phone_").append(str);
    this->darkest_secret.assign("secret_").append(str);
    if (Contact::count < 8) {
        Contact::count += 1;
    }
    return (1);
}

int Contact::count = 0;