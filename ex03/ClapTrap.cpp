/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:06:39 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/19 09:35:49 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string &name): name(name), hitPoint(10), enegyPoint(10), attackDamage(0) {
    std::cout << "ClapTrap " << this->getName() << " constructed" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->getName() << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &inst): name(inst.name), hitPoint(inst.getHitPoint()), enegyPoint(inst.getEnegyPoint()), attackDamage(inst.getAttackDamage()) {
    std::cout << "ClapTrap " << this->getName() << " copy constructed" << std::endl;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
    if (this != &rhs)
    {
        this->name = rhs.name;
        this->hitPoint = rhs.hitPoint;
        this->enegyPoint = rhs.enegyPoint;
        this->attackDamage = rhs.attackDamage;
    }
    std::cout << "ClapTrap " << this->name << " copy assigned" << std::endl;
    return (*this);
}

unsigned int ClapTrap::getHitPoint() const {
    return (this->hitPoint);
}

unsigned int ClapTrap::getEnegyPoint() const {
    return (this->enegyPoint);
}

unsigned int ClapTrap::getAttackDamage() const {
    return (this->attackDamage);
}

std::string ClapTrap::getName() const {
    return (this->name);
}

void ClapTrap::setEnegyPoint(unsigned int point) {
    this->enegyPoint = point;
}

void ClapTrap::setHitPoint(unsigned int point) {
    this->hitPoint = point;
}

void ClapTrap::attack(const std::string &target) {
    if (this->getHitPoint() <= 0)
    {
        std::cout << this->getName() << " has no hit points left and can't act!" << std::endl;
        return ;
    }
    if (this->getEnegyPoint() <= 0)
    {
        std::cout << this->getName() << " has no enegy points left and can't act!" << std::endl;
        return ;
     }
    std::cout << this->getName() << " attack " << target << " " << this->getAttackDamage() <<" points of damage!" << std::endl;
    this->setEnegyPoint(getEnegyPoint() - 1);
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->getHitPoint() <= 0)
    {
        std::cout << this->getName() << " is already died" << std::endl;
        return ;
    }
    if (this->getHitPoint() <= amount)
        this->setHitPoint(0);
    else
        this->setHitPoint(this->getHitPoint() - amount);
    std::cout << this->getName() << " takes " << amount << " points of damage" << std::endl;
    if (this->getHitPoint() == 0)
        std::cout << this->getName() << " is died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->getHitPoint() <= 0)
    {
        std::cout << this->getName() << " can't be repaired because it has no hit point left!" << std::endl;
        return;
    }
    if (this->getEnegyPoint() <= 0)
    {
        std::cout << this->getName() << " has no enegy points left and can't act" << std::endl;
    }
    setHitPoint(this->getHitPoint() + amount);
    setEnegyPoint(getEnegyPoint() - 1);
    std::cout << this->getName() << " repaired " << amount << " point" << std::endl;
}