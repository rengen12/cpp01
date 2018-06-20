/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 20:55:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/18 20:55:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
    return;
}

Zombie::~Zombie(void) {}

const std::string &Zombie::getType() const {
    return this->_type;
}

void Zombie::setType(const std::string &type) {
    this->_type = type;
}

const std::string &Zombie::getName() const {
    return this->_name;
}

void Zombie::setName(const std::string &name) {
    this->_name = name;
}

void Zombie::announce(void) {
    std::cout << "<" + this->_name + " (" + this->_type + ")> " +
                 "Braiiiiiinnnnssss..." << std::endl;
}
