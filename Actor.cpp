//
// Created by Kieran Edraney on 1/23/2019.
//

#include "Actor.h"



Actor::Actor(std::string pid, int phealth, int pstrength, int pspeed) {
    set_health(phealth);
    set_speed(pspeed);
    set_strength(pstrength);
    fid = pid;
}

void Actor::set_health(int phealth) {
    fhealth = phealth;
}

void Actor::set_strength(int pstrength) {
    fstrength = pstrength;
}

void Actor::set_speed(int pspeed) {
    fspeed = pspeed;
}

int Actor::calculate_damage() {
    return fstrength;
}

void Actor::apply_damage(int dmg) {
    fhealth -= dmg;
    std::cout << fid << " took " << dmg << " damage and has " << fhealth << " fhealth" << std::endl;

    if(!is_alive()) {
        std::cout << fid << " is dead" << std::endl;
    }
}

int Actor::get_health() {
    return fhealth;
}

int Actor::get_speed() {
    return fspeed;
}

bool Actor::is_alive() {
    return get_health() > 0;
}