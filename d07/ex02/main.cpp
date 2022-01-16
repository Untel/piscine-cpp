/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:08:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 04:14:18 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"
#define MAX_VAL 750

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
        std::cout << "Int test case\n";
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
        std::cout << "\n\nString test case\n";
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
        std::cout << "\n\nAwesome test case\n";
        Array<Awesome> *arr = new Array<Awesome>(10);
        (*arr)[1].set(72);
        std::cout << "el idx 0 is => " << (*arr)[0] << std::endl;
        std::cout << "el idx 1 is => " << (*arr)[1] << std::endl;
        std::cout << "el idx 2 is => " << (*arr)[2] << std::endl;
        std::cout << "el idx 3 is => " << (*arr)[3] << std::endl;
        delete arr;
    }
    {
        std::cout << "\n\nSubject test case\n";
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        // for (int i = 0; i < MAX_VAL; i++)
        // {
        //     std::cout << "Elm at " << i << " is " << numbers[i] << '\n';
        // }
        delete [] mirror;//
    }
    return 0;
}
