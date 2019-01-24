//
// Created by Kieran Edraney on 1/23/2019.
//

/* The main method will create 2 actors (ally then enemy[Murray]) using the getActor method (which utilizes the nonZero method) in order to
 * go through the motions of prompting the user for input. Then, it determines which actor goes first and then proceeds to have them
 * fist it out until one remains alive. It's like Highlander - there can be only one. It then outputs the result and terminates.
 *
 */

#include "Actor.h"

int nonZero(std::string attribute) {
    int value = -1;
    int count = 0;

    while(value < 1) {
        std::cout << "Please enter a value greater than 0 for this actor's " << attribute <<  "." << std::endl;
        std::cin >> value;

        count--;

        if(count < -50) {
            std::cout << attribute << " is set to default value of 1" << std::endl;

            return 1;
        }
    }

    return value;
}

Actor getActor(int i) {
    int health = -1;
    int speed = -1;
    int strength = -1;

    health = nonZero("fhealth");
    speed = nonZero("fspeed");
    strength = nonZero("fstrength");

    if(i == 1) {
        return Actor("Ally", health, strength, speed);
    }
    else {
        return Actor("Murray", health, strength, speed);
    }
}

int main() {
    std::cout << "Enter statistics for your ally" << std::endl;
    Actor ally = getActor(1);
    std::cout << std::endl << "Enter statistics for your enemy(Murray)" << std::endl;
    Actor combatant = getActor(2);

    int turn = 2;

    if(ally.get_speed() >= combatant.get_speed()) {
        turn = 1;
    }

    std::cout << "Initiate combat" << std::endl;

    std::cout << "---------------" << std::endl << std::endl;

    while(ally.is_alive() && combatant.is_alive()) {
        if(turn == 1) {
            combatant.apply_damage(ally.calculate_damage());

            turn = 2;
        }
        else {
            ally.apply_damage(combatant.calculate_damage());

            turn = 1;

            //to make it easier to see
            std::cout << std::endl;
        }
    }

    if(ally.is_alive()) {
        std::cout << "Your ally had superior statistics!" << std::endl;
    }
    else {
        std::cout << "You let your ally down. . ." << std::endl;
    }
}