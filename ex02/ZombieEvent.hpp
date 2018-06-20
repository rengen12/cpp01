/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 20:55:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/18 20:55:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
public:
    ZombieEvent();
    ~ZombieEvent();

    const   std::string &getZombieType() const;
    void    setZombieType(const std::string &_type);
    Zombie* newZombie(std::string &name);
    Zombie* randomChump(void);
    std::string genRandom(std::string s, int len);

private:
    std::string _type;
};

#endif
