/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 20:55:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/18 20:55:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void) {
    Pony *pony = new Pony("Workhorse");
    std::cout << "Now delete Pony created on heap" << std::endl;
    delete pony;
}

void ponyOnTheStack(void) {
    Pony pony = Pony("Lazy horse");
}

int main() {
    std::cout << "Call ponyOnTheHeap" << std::endl;
    ponyOnTheHeap();
    std::cout << "ponyOnTheHeap finished" << std::endl;
    std::cout << "Call ponyOnTheStack" << std::endl;
    ponyOnTheStack();
    std::cout << "ponyOnTheStack finished" << std::endl;
    return (0);
}
