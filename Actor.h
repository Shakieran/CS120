//
// Created by Kieran Edraney on 1/23/2019.
//

#ifndef CS120_ACTOR_H
#define CS120_ACTOR_H

#include <String>
#include <iostream>

class Actor
{
private:
    std::string id;
    int health;
    int strength;
    int speed;

    void setHealth(int hp);
    void setStrength(int str);
    void setSpeed(int spd);

public:
    Actor(std::string id, int hp, int str, int spd);

    int calculateDamage();
    void applyDamage(int dmg);

    int getHealth();
    int getSpeed();

    bool isAlive();
};

#endif //CS120_ACTOR_H
