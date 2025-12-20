/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-19 23:25:11 by kaisuzuk          #+#    #+#             */
/*   Updated: 2025-12-19 23:25:11 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap: public ClapTrap{
    public:
        FragTrap(const std::string &name);
        ~FragTrap();
        FragTrap(const FragTrap &);
        FragTrap &operator=(const FragTrap &);
        void highFivesGuys() const;
};

#endif