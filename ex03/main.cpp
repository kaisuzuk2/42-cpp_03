/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-20 02:18:42 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025-12-20 02:18:42 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

void printSection(const std::string title) {
    std::cout << "\n==========" << title << "==========\n";
}

int main() {
    printSection("Basic construct / destruction");
    {
        DiamondTrap d("dia");
        d.whoAmI();
        d.attack("enemy");
        d.highFivesGuys();
        d.guardGate();
    }

    printSection("copy constructor");
    {
        DiamondTrap a("a");
        DiamondTrap b(a);
        a.whoAmI();
        b.whoAmI();
        b.attack("target");
    }

    printSection("copy");
    {
        DiamondTrap a("a");
        DiamondTrap b("b");

        a.whoAmI();
        b.whoAmI();

        b = a;
        a.whoAmI();
        b.whoAmI();

        b = b;
        b.whoAmI();
    }
}