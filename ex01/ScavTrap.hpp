/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-19 01:39:36 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025-12-19 01:39:36 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap{
    public:
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &);
        ScavTrap &operator=(const ScavTrap &);
        ~ScavTrap();
        void guardGate() const;
        void attack(const std::string &target);
};

#endif