#include "person.h"
#include "player.h"

Player::Player(std::string_view game_param, std::string_view first_name_param, std::string_view last_name_param)
{
    m_game = game_param;
    first_name = first_name_param;
    last_name = last_name_param;
}

std::ostream &operator<<(std::ostream &out, const Player &player)
{   
    // Can access first and last name from Person class
    out << "Player: [game: " << player.m_game << " name: " << player.get_first_name() << " " << player.get_last_name() << "]";

    return out;
}