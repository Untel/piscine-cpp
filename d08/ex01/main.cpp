/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:08:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 09:14:21 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <list>
#include <limits>
#include <string>
#include <bits/stdc++.h>

int
    main(void)
{
    {
        Span s(10);
        Span ss(5);
        std::list<int> lst;
        lst.push_back(4);
        lst.push_back(5);
        lst.push_back(150);
        s.addNumber(1);
        s.addNumber(7);
        s.addNumber(100);
        s.addNumber< std::list<int> >(lst.begin(), lst.end());
        std::cout << s.longestSpan() << " S span\n";

        std::cout << "Copy SS then add number span\n";
        ss = s;
        ss.addNumber(200);
        std::cout << s.longestSpan() << " S span\n";
        std::cout << ss.longestSpan() << " SS span\n";
    }
    {
        std::list<int> lst;
        Span s(5);
        lst.assign(1, INT_MAX);
        lst.push_back(INT_MIN);
        s.addNumber< std::list<int> >(lst.begin(), lst.end());

        std::cout << s.longestSpan() << " span\n";
        std::cout << s.shortestSpan() << " span\n";
    }
    return 0;
}