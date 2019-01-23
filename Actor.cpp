//
// Created by Kieran Edraney on 1/23/2019.
//

#include "Actor.h"



Actor::Actor(std::string i, int hp, int str, int spd)
{
    setHealth(hp);
    setSpeed(spd);
    setStrength(str);
    id = i;
}

void Actor::setHealth(int hp)
{
    health = hp;
}

void Actor::setStrength(int str)
{
    strength = str;
}

void Actor::setSpeed(int spd)
{
    speed = spd;
}

int Actor::calculateDamage()
{
    return strength;
}

void Actor::applyDamage(int dmg)
{
    health -= dmg;
    std::cout << id << " took " << dmg << " damage and has " << health << " health" << std::endl;

    if(!isAlive())
    {
        std::cout << id << " is dead" << std::endl;
    }
}

int Actor::getHealth()
{
    return health;
}

int Actor::getSpeed()
{
    return speed;
}

bool Actor::isAlive()
{
    return getHealth() > 0;
}