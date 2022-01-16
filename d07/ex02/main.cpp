/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:08:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 03:30:37 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

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

int
    main(void)
{
    {
        Array<int> *arr = new Array<int>(10);

        (*arr)[0] = 123456;
        (*arr)[1] = -1772;
        (*arr)[3] = 1;
        std::cout << "el idx 0 is => " << (*arr)[0] << std::endl;
        std::cout << "el idx 1 is => " << (*arr)[1] << std::endl;
        std::cout << "el idx 2 is => " << (*arr)[2] << std::endl;
        std::cout << "el idx 3 is => " << (*arr)[3] << std::endl;
        try {
            (*arr)[667] = 667;
        } catch (std::exception &ex) {
            std::cout << "Execept " << ex.what() << std::endl;
        }
        delete arr;
    }
    {
        Array<std::string> *arr = new Array<std::string>(10);

        (*arr)[0] = "Lol";
        (*arr)[1] = "Salut";
        (*arr)[3] = "Arg";
        std::cout << "el idx 0 is => " << (*arr)[0] << std::endl;
        std::cout << "el idx 1 is => " << (*arr)[1] << std::endl;
        std::cout << "el idx 2 is => " << (*arr)[2] << std::endl;
        std::cout << "el idx 3 is => " << (*arr)[3] << std::endl;

        try {
            (*arr)[-175] = "Bonjour";
        } catch (std::exception &ex) {
            std::cout << "Execept " << ex.what() << std::endl;
        }
        delete arr;
    }
    {
        Array<Awesome> *arr = new Array<Awesome>(10);
        (*arr)[1].set(72);
        std::cout << "el idx 0 is => " << (*arr)[0] << std::endl;
        std::cout << "el idx 1 is => " << (*arr)[1] << std::endl;
        std::cout << "el idx 2 is => " << (*arr)[2] << std::endl;
        std::cout << "el idx 3 is => " << (*arr)[3] << std::endl;
        delete arr;
    }
    return 0;
}