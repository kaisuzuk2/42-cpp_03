/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-19 04:49:28 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025-12-19 04:49:28 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main(void) {
    std::cout << "----- Cosntruct ScavTrap -----" << std::endl;
    ScavTrap s1("s1");
    s1.attack("enemy");
    s1.guardGate();
    std::cout << std::endl;

    std::cout << "----- copy -----" << std::endl;
    ScavTrap s2(s1);
    ScavTrap s3("tmp");
    s3 = s1;
    std::cout << std::endl;

    std::cout << "----- Phlymorphism -----" << std::endl;
    ClapTrap *p = new ScavTrap("Poly");
    p->attack("enemy");
    delete p;

}