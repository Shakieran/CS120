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
    /* Requires:
     * Modifies:
     * Effects: the string that the user uses to recognize the program
     */
    std::string id;
    /* Requires:
     * Modifies:
     * Effects: the integer representation of current health, 0 or below being dead
     */
    int health;
    /* Requires:
     * Modifies:
     * Effects: the current strength, which corrects to damage at a 1:1 ratio
     */
    int strength;
    /* Requires:
     * Modifies:
     * Effects: the current speed, where the actor with the highest speed attacks first
     */
    int speed;

    /* Requires: int hp that we are setting health to
 * Modifies: health
 * Effects: sets health to hp
 */
    void setHealth(int hp);
    /* Requires: int str
  * Modifies: strength
  * Effects: sets strength to the int str
  */
    void setStrength(int str);
    /* Requires: int spd
 * Modifies: speed
 * Effects: sets speed to the int spd
 */
    void setSpeed(int spd);

public:
    /* Requires: string i, int hp, int str, int spd
 * Modifies: id, health, strength, speed
 * Effects: it sets the fields to the corresponding parameters
 */
    Actor(std::string i, int hp, int str, int spd);

    /* Requires:
 * Modifies:
 * Effects: it returns the damage based on the current strength
 */
    int calculateDamage();
    /* Requires: int damage -- the damage done
 * Modifies: health
 * Effects: it subtracts the damage dealt from health and will print if the actor is dead if they are dead
 */
    void applyDamage(int dmg);

    /* Requires:
 * Modifies:
 * Effects: returns the current health
 */
    int getHealth();
    /* Requires:
 * Modifies:
 * Effects: returns the current speed
 */
    int getSpeed();

    /* Requires:
 * Modifies:
 * Effects: returns whether or not health is greater than 0
 */
    bool isAlive();
};

#endif //CS120_ACTOR_H
