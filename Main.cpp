//
// Created by Kieran Edraney on 1/23/2019.
//

#include "Actor.h"

/* Requires: string attribute -- what the person will see in the prompt
 * Modifies: nada
 * Effects: goes through the motions of taking in an integer greater than 0 for the given attribute, that integer being what it returns
 *          returns 1 if the while loop goes 50 iterations or so
 */
int nonZero(std::string attribute)
{
    int value = -1;
    int count = 0;

    while(value < 1)
    {
        std::cout << "Please enter a value greater than 0 for this actor's " << attribute <<  "." << std::endl;
        std::cin >> value;

        count--;

        if(count < -50)
        {
            std::cout << attribute << " is set to default value of 1" << std::endl;

            return 1;
        }
    }

    return value;
}

/* Requires: integer i -- 1 if ally, otherwise the actor is Murray(enemy)
 * Modifies:
 * Effects: Takes in the various parameters required to create an actor, and then creates an actor with those inputted values
 */
Actor getActor(int i)
{
    int health = -1;
    int speed = -1;
    int strength = -1;

    health = nonZero("health");
    speed = nonZero("speed");
    strength = nonZero("strength");

    if(i == 1)
    {
        return Actor("Ally", health, strength, speed);
    }
    else
    {
        return Actor("Murray", health, strength, speed);
    }
}

/* Requires:
 * Modifies:
 * Effects: Creates two actors and then has them fight to the death and determines whether the ally or combatant wins, allowing the user
 *          to determine which set of attributes were superior.
 */
int main()
{
    std::cout << "Enter statistics for your ally" << std::endl;
    Actor ally = getActor(1);
    std::cout << std::endl << "Enter statistics for your enemy(Murray)" << std::endl;
    Actor combatant = getActor(2);

    int turn = 2;

    if(ally.getSpeed() >= combatant.getSpeed())
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

            //to make it easier to see
            std::cout << std::endl;
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