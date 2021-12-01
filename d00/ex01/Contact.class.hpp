/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:28:52 by commetuveux       #+#    #+#             */
/*   Updated: 2021/11/20 19:18:36 by adda-sil         ###   ########.fr       */
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
    std::string phone_number;
    std::string darkest_secret;

    Contact(void);
    ~Contact(void);

    int init(void);
    int autofill(void);
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