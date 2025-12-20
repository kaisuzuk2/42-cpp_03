/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-19 03:54:28 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025-12-19 03:54:28 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
    this->hitPoint = 100;
    this->enegyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " constructed" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->getName() << " destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &inst): ClapTrap(inst) {
    std::cout << "ScavTrap " << this->name << " copy assigned" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    std::cout << "ScavTrap " << this->name << " copy assigned" << std::endl;
    return (*this);
}

void ScavTrap::attack(const std::string &target) {
    if (this->getHitPoint() <= 0)
    {
        std::cout << "ScavTrap " << this->getName() << " has no hit points left and can't act!" << std::endl;
        return ;
    }
    if (this->getEnegyPoint() <= 0)
    {
        std::cout << "ScavTrap "<< this->getName() << " has no enegy points left and can't act!" << std::endl;
        return ;
     }
    std::cout << "ScavTrap " << this->getName() << " attack " << target << " " << this->getAttackDamage() <<" points of damage!" << std::endl;
    this->setEnegyPoint(getEnegyPoint() - 1);
}

void ScavTrap::guardGate() const {
    std::cout << "ScavTrap " << this->getName() << " has entered Gatekeeper mode. None shall pass!" << std::endl;
}