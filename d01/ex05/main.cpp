/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 07:21:34 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/09 18:36:53 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int
    main(void)
{
    Karen karen = Karen();

    karen.complain("debug");
    karen.complain("warning");
    karen.complain("kaka");
    karen.complain("error");
    karen.complain("info");
    return (0);
}