/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:08:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 10:07:33 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>
#include <limits>
#include <string>
#include <bits/stdc++.h>

void
    subjectTest()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

int
    main(void)
{

    std::cout << "SUBJECT TEST\n";
    subjectTest();

    std::cout << "CUSTOM TEST\n";
    MutantStack<int> mutant;

    mutant.push(10);
    mutant.push(20);

    std::cout << "Mutant: " << mutant.top() << std::endl;

    mutant.push(40);
    mutant.pop();
    mutant.push(75);
    std::cout << "Mutant: " << mutant.top() << std::endl;


    MutantStack<int>::iterator it = mutant.begin();
    for (; it != mutant.end(); it++) {
        std::cout << "Mutant iteration: " << *it << std::endl;
    }

    std::stack<int> legacy = std::stack<int>(mutant);
    std::cout << "Stack size: " << legacy.size() << std::endl;

    legacy.pop();
    std::cout << "Stack size: " << legacy.size() << std::endl;
    std::cout << "Mutant size: " << mutant.size() << std::endl;

    mutant = legacy;
    mutant.pop();
    std::cout << "Stack size: " << legacy.top() << std::endl;
    std::cout << "Mutant size: " << mutant.top() << std::endl;
    return 0;
}