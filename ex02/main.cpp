/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-19 23:47:16 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025-12-19 23:47:16 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main() {
    std::cout << "----- member test -----" << std::endl;
    FragTrap f1("f1");
    std::cout << "HP :" << f1.getHitPoint() << std::endl;
    std::cout << "EP :" << f1.getEnegyPoint() << std::endl;
    std::cout << "ATK:" << f1.getAttackDamage() << std::endl;

    std::cout << "----- high five guys -----" << std::endl;
    f1.highFivesGuys();

    std::cout << "----- copy test -----" << std::endl;
    f1.attack("enemy");
    FragTrap f2(f1);
    std::cout << "f2(f1 copy) :" << f2.getName() << std::endl;
    std::cout << "f1 enegy point = " << f1.getEnegyPoint() << std::endl;
    std::cout << "f2 enegy point = " << f2.getEnegyPoint() << std::endl;

    std::cout << "----- operator= test -----" << std::endl;
    FragTrap f3("tmp");

    f3 = f1;
    std::cout <<  f1.getName() << " enegy point = " << f1.getEnegyPoint() << std::endl;
    std::cout << f3.getName() << " enegy point = " << f3.getEnegyPoint() << std::endl; 
}