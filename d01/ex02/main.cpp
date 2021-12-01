/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:01:35 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/01 06:08:18 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int
    main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address str      : " << &str << std::endl;
	std::cout << "Address stringPTR: " << stringPTR << std::endl;
	std::cout << "Address stringREF: " << &stringREF << std::endl;
	std::cout << "Content str      : " << str << std::endl;
	std::cout << "Content stringPTR: " << *stringPTR << std::endl;
	std::cout << "Content stringREF: " << stringREF << std::endl;
    return (0);
}
