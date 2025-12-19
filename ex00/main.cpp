/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 09:23:02 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/19 09:38:06 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
int main(void) {
    ClapTrap c1("c1");
    ClapTrap c2("c2");
    
    std::cout << "----- enegy point test -----" << std::endl;
    for (int i = 0; i < 11; i++)
        c1.attack("c2");

    std::cout << "enegy points = " << c2.getEnegyPoint() << std::endl;
    c2.attack("c1");
    std::cout << "enegy points = " << c2.getEnegyPoint() << std::endl;
    std::cout << "------------------------------" << std::endl;

    std::cout << "----- copy test -----" << std::endl;
    ClapTrap c3("c3");
    c3 = c1;
    std::cout << "expected name = c1 : " << c3.getName() << std::endl; 

    ClapTrap c4(c1);
    std::cout << "expected name = c1 : " << c4.getName() << std::endl; 
    std::cout << "------------------------------" << std::endl;

    
    std::cout << "----- damage test -----" << std::endl;
    for (int i = 0; i < 11; i++)
        c2.takeDamage(1);
    std::cout << "------------------------------" << std::endl;

    std::cout << "----- repair test -----" << std::endl;
    c3.takeDamage(5);
    std::cout << "hit point = " << c3.getHitPoint() << std::endl;
    c3.beRepaired(5);
    std::cout << "hit point = " << c3.getHitPoint() << std::endl;
    c3.takeDamage(10);
    std::cout << "hit point = " << c3.getHitPoint() << std::endl;
    c3.beRepaired(10);
    std::cout << "hit point = " << c3.getHitPoint() << std::endl;
    std::cout << "------------------------------" << std::endl;
}