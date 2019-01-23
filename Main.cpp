//
// Created by Kieran Edraney on 1/23/2019.
//

#include "Actor.h"

int nonZero(std::string attribute)
{
    int value = -1;

    while(value < 1)
    {
        std::cout << "Please enter a value greater than 0 for this actor/'s " << attribute <<  "." << std::endl;
        std::cin >> value;
    }

    return value;
}

Actor getActor(int i)
{
    int health = -1;
    int speed = -1;
    int strength = -1;

    std::string name;

    std::cout << "Enter any input for the name of this actor" << std::endl;
    std::cin >> name;

    health = nonZero("health");
    speed = nonZero("speed");
    strength = nonZero("strength");

    return Actor(name, health, strength, speed);
}

int main()
{
    std::cout << "Enter statistics for your ally" << std::endl;
    Actor ally = getActor(1);
    std::cout << std::endl << "Enter statistics for your enemy" << std::endl;
    Actor combatant = getActor(2);

    int turn = 2;

    if(ally.getSpeed() > combatant.getSpeed())
    {
        turn = 1;
    }

    std::cout << "Initiate combat" << std::endl;

    std::cout << "---------------" << std::endl << std::endl;

    while(ally.isAlive() && combatant.isAlive())
    {
        if(turn == 1)
        {
            combatant.applyDamage(ally.calculateDamage());

            turn = 2;
        }
        else
        {
            ally.applyDamage(combatant.calculateDamage());

            turn = 1;
        }
    }

    if(ally.isAlive())
    {
        std::cout << "Your ally had superior statistics!" << std::endl;
    }
    else
    {
        std::cout << "You let your ally down. . ." << std::endl;
    }
}