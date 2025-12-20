/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-19 23:27:45 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025-12-19 23:27:45 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    this->hitPoint = 100;
    this->enegyPoint = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << this->getName() << " constructed" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->getName() << " destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &inst) : ClapTrap(inst) {
    std::cout << "FragTrap " << this->getName() << " copy constructed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
    if (this != &rhs) 
        ClapTrap::operator=(rhs);
    std::cout << "FragTrap " << this->getName() << " copy assigned" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys() const {
    std::cout << "FragTrap " << this->getName() << " : Hey everyone! High fives all around!" << std::endl;
}
