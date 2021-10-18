/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: commetuveux <commetuveux@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:28:52 by commetuveux       #+#    #+#             */
/*   Updated: 2021/10/17 23:39:11 by commetuveux      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>
class Contact {

public:
    static int  count;

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string phone_number;
    std::string birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;

    Contact(void);
    ~Contact(void);

    int init(void);
};

#endif

// std::string first_name,
// std::string last_name,
// std::string nickname,
// std::string login,
// std::string postal_address,
// std::string phone_number,
// std::string birthday_date,
// std::string favorite_meal,
// std::string underwear_color,
// std::string darkest_secret