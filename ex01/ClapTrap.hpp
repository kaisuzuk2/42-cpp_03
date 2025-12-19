/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:00:02 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/19 09:35:37 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
    protected:
        std::string name;
        unsigned hitPoint;
        unsigned enegyPoint;
        unsigned attackDamage;
    public:
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &);
        ClapTrap &operator=(const ClapTrap &);
        virtual ~ClapTrap();
        unsigned int getHitPoint() const;
        unsigned int getEnegyPoint() const;
        unsigned int getAttackDamage() const;
        std::string getName() const;
        void setEnegyPoint(unsigned int point);
        void setHitPoint(unsigned int point);
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif