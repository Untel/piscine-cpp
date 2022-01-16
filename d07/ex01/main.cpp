/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:08:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 03:36:12 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
    private:
        int _n;
    public:
        Awesome( void ) : _n(42) { return; }
        int get(void) const { return this->_n; }
        void set(int v) { this->_n = v; }
};
std::ostream & operator<<(std::ostream & o, Awesome const & a){
	o << a.get();
	return o;
}

template<typename T>
void
    myPrint(T & el) {
    std::cout << "Iter => " << el << std::endl;
}

template<typename T>
void
    increment(T & el) {
    el++;
}

int
    main(void)
{
    int ints[4] = { 0, 1, 2, 5 };
    std::string strs[4] = { "abc", "def", "hij", "klm" };

    // ::iter<int>((int *)ints, (size_t)4, (void (*)(int const & el))myPrint);
    ::iter<int>(ints, 4, increment<int>);
    ::iter<int>(ints, 4, myPrint<int>);
    ::iter<std::string>(strs, 4, myPrint<std::string>);

    Awesome aws[4];
    aws[2].set(72);
    ::iter<Awesome>(aws, 4, myPrint<Awesome>);
    return 0;
}