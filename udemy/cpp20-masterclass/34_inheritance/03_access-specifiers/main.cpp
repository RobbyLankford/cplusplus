#include <iostream>

#include "engineer.h"
#include "nurse.h"
#include "player.h"
#include "person.h"

int main()
{
    Person p1;

    std::cout << "Person -> " << p1 << std::endl;

    // Person class can overwrite any public member of Person class
    p1.m_full_name = "Samuel Jackson";

    std::cout << "Person1 -> " << p1 << std::endl;

    std::cout << "\n----------\n" << std::endl;
    
    Player p2;

    std::cout << "Player -> " << p2 << std::endl;

    // Player class overwrite any public member of Person class
    p2.m_full_name = "Samuel Jackson";

    std::cout << "Player -> " << p2 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    Nurse p3;

    std::cout << "Nurse -> " << p3 << std::endl;

    // Nurse cannot overwrite any members from Person class
    
    std::cout << "\n----------\n" << std::endl;

    Engineer p4;

    std::cout << "Engineer -> " << p4 << std::endl;

    // Engineer cannot overwrite any member from Person class

    return 0;
}