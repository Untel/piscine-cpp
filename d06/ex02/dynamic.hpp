/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 20:37:26 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/12 23:13:12 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYNAMIC_HPP
# define DYNAMIC_HPP
# include <stdint.h>
# include <iostream>
# include <string>
# include <cstdlib>

class Base {
    public:
        virtual ~Base() {};
};
class A : public Base {
    public:
        virtual ~A() {};
};
class B : public Base {
    public:
        virtual ~B() {};
};
class C : public Base {
    public:
        virtual ~C() {};
};

Base    * generate(void);
void    identify(Base * p);
void    identify(Base & p);

#endif // !DYNAMIC_HPP

















