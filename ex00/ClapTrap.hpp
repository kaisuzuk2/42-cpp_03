/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:00:02 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025/12/18 13:06:26 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap {
    private:
        std::string name;
        int hitPoint;
        int enegyPoint;
        int attackDamage;
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &);
        ClapTrap &operator=(const ClapTrap &);
        ~ClapTrap();
        void attack() const;
        void beRepaired();
};

#endif