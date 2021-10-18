/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: commetuveux <commetuveux@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:23:39 by commetuveux       #+#    #+#             */
/*   Updated: 2021/10/18 00:03:33 by commetuveux      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void
    print_ten_chars(std::string str)
{
    if (str.length() > 10) {
        str = str.insert(9, ".");
        str = str.substr(0, 10);
    }
    else {
        while (str.length() < 10)
            str = str.insert(0, " ");
    }
    std::cout << str;
}

int
    search(Contact contacts[8])
{
    Contact *c;
    print_ten_chars(std::string("Id"));
    print_ten_chars(std::string("First name"));
    print_ten_chars(std::string("Last name"));
    print_ten_chars(std::string("Nickname"));
    for (int i = 0; i <= Contact::count; i++) {
        c = &contacts[i];
        print_ten_chars(std::to_string(i));
        print_ten_chars(c->first_name);
        print_ten_chars(c->last_name);
        print_ten_chars(c->nickname);
    }
    return 1;
}

int
    add(Contact contacts[8])
{
    if (Contact::count >= 8) {
        std::cout << "Too much contacts added" << std::endl;
        return (0);
    }
    contacts[Contact::count].init();
    return 1;
}

int
    main(void)
{
    std::string     input ("");
    Contact         contacts[8];

    while (input.compare("EXIT")) {
        if (input.compare("ADD") == 0) {
            add(contacts);
        } else if (input.compare("SEARCH") == 0) {
            search(contacts);
            std::cout << "Searching: " << input << std::endl;
        } else if (input.compare("") != 0) {
            std::cout << "Command '" << input << "' is unknown." << std::endl;
        }
        std::cout << "cmd (ADD, SEARCH, EXIT): ";
        std::cin >> input;
    }
    return 0;
}