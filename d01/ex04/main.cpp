/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 07:21:34 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/11 23:59:19 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

int
    main(int ac, char **av)
{
    if (ac < 4) {
        std::cout << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    std::string     in_file(av[1]);
    std::ifstream   reader(av[1]);
    if (reader.fail()) {
        std::cout << "Fail to open file " << in_file << std::endl;
        return (1);
    }
    std::string     buffer;
    std::string     out_file(in_file + ".replace");
    std::ofstream   writer;
    std::string     s1(av[2]);
    std::string     s2(av[3]);
    std::getline(reader, buffer, '\0');
    if (reader.fail()) {
        std::cout << "Fail to read file " << in_file << std::endl;
        return (1);
    }
    writer.open(out_file.c_str());
    if (writer.fail()) {
        std::cout << "Fail to open file " << out_file << std::endl;
        return (1);
    }
    if (!s1.length()) {
        std::cout << "S1 cannot be empty" << out_file << std::endl;
        return (1);
    }
    size_t idx = 0;
    while ((idx = buffer.find(s1, idx)) != std::string::npos) {
        buffer.replace(idx, s1.length(), s2);
        idx += s1.length();
    }
    writer << buffer;
    if (!reader.eof())
        writer << std::endl;
    writer.close();
    reader.close();
    return (0);
}