#include <iostream>

#include "player.h"
#include "person.h"

Player::Player() {}

std::ostream &operator<<(std::ostream &out, const Player &player)
{
    out << "Player [Full Name: " << player.get_full_name()
        << ", Age: " << player.get_age()
        << ", Address: " << player.get_address() << "]";

    return out;
}

Player::~Player() {}