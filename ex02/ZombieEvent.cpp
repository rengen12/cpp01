/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 20:55:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/18 20:55:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
    this->_type = "default";
}

ZombieEvent::~ZombieEvent(void) {}

const       std::string &ZombieEvent::getZombieType() const {
    return this->_type;
}

void        ZombieEvent::setZombieType(const std::string &type) {
    this->_type = type;
}

Zombie*     ZombieEvent::newZombie(std::string &name) {
    return (new Zombie(name, this->getZombieType()));
}

Zombie*		ZombieEvent::randomChump(void)
{
    std::string randName = "Alphred";
    randName = this->genRandom(randName, 7);
    Zombie* zombie = newZombie(randName);

    zombie->announce();
    return (zombie);
}

std::string ZombieEvent::genRandom(std::string s, int len) {
    static const char alphanum[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return s;
}
