/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-20 01:23:36 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025-12-20 01:23:36 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {
    this->hitPoint = FragTrap::hitPoint;
    this->enegyPoint = ScavTrap::enegyPoint;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << this->name << " constructed" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->name << " destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &inst): ClapTrap(inst), ScavTrap(inst), FragTrap(inst){
    std::cout << "DiamondTrap" << this->name << " copy constructed" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
    if (this != &rhs) 
    {
        ClapTrap::operator=(rhs);
        this->name = rhs.name;
    }
    std::cout << "DiamondTrap " << this->name << " copy assigned" << std::endl;
    return (*this);
}

void DiamondTrap::whoAmI() const {
    std::cout << "DiamondTrap: " << this->name << " / ClapTrap: " << this->getName() << std::endl;
}





