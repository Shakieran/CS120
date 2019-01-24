//
// Created by Kieran Edraney on 1/23/2019.
//

#ifndef CS120_ACTOR_H
#define CS120_ACTOR_H

#include <String>
#include <iostream>

/* This file represents an Actor in a game or world or whatever. They have 4 attributes:
 * Health - the amount of fhealth they have -- at 0 or less they have 0 fhealth
 * Speed - The high the fspeed, the more likely they will get to attack first
 * Strength - Damage is calculated on a 1:1 ratio with this attribute
 * ID - The ID is simply the name of the actor that the player will see - it need not be unique, although should be to avoid confusion
 *
 * Notes:
 * Calculate damage returns fstrength since damage is just equivalent to fstrength
 * Apply Damage will both negate the damage inputed from the fhealth and ALSO print out that the actor has died if their fhealth has dropped
 *              below 0
 * is_alive will return whether or not the current fhealth is above 0
 *
 */

 class Actor {
private:
    std::string fid;
    int fhealth;
    int fstrength;
    int fspeed;

    void set_health(int phealth);
    void set_strength(int pstrength);
    void set_speed(int pspeed);

public:
    Actor(std::string pid, int phealth, int pstrength, int pspeed);

    int calculate_damage();
    void apply_damage(int dmg);

    int get_health();
    int get_speed();

    bool is_alive();
};

#endif //CS120_ACTOR_H
