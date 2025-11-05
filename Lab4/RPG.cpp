//RPG.cpp
#include <iostream>
#include <string>
#include "RPG.h"

RPG::RPG(){
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;  
}

RPG::RPG(string name, int hits_taken, float luck, float exp, int level)
{
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;  
}

//IMPLEMENT ACCESSOR Funcions later

/**
 * @brief returns the name
 * 
 * @return string 
 */
const string RPG::getName(){
    return name; 
}


/**
 * @brief returns hits taken
 * 
 * @return const int 
 */
const int RPG::getHitsTaken(){
    return hits_taken;
}

/**
 * @brief returns luck value
 * 
 * @return const float 
 */
const float RPG::getLuck(){
    return luck;
}

/**
 * @brief returns the amount of exp
 * 
 * @return const float 
 */
const float RPG::getExp(){
    return exp;

}

/**
 * @brief returns the level
 * 
 * @return const int 
 */
const int RPG::getLevel(){
    return level;
}

/**
* @brief sets hits_taken to new_hits
*
*/

void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;

}

/**
* @brief returns whether hits_taken is less than MAX_HITS_TAKEN
* In other words, a player is alive as long as they have not been hit MAX_HITS_TAKEN times.
*
* @return true : player is alive
* @return false : player is unalive
*/

const bool RPG::isAlive(){
    if (hits_taken >= MAX_HITS_TAKEN) return false;
    else return true;
}

//Extended Functions

/**
 * @brief updates name
 * 
 * @param name
 */
void RPG::setName(string name){
    this->name = name;
}

/**
 * @brief increase RPG exp by 50; if RPG exp >= 100.0, increase
 *        level by 1, reset EXP to 0, and increase luck by 0.1 
 * 
 */
void RPG::updateExpLevel(){
    exp += 50.0;
    if (exp >= 100.0) level++, exp = 0, luck += 0.1;
}

/**
 * @brief Hits or misses at random. Luck is a form of defense. 
 *        The greater the luck of the opponent, more likely an attack will miss.
 *        If the attack hits, opponents hit count increases by 1
 * @param opponent: RPG*
 */
void RPG::attack(RPG* opponent){

    random_device rd;
    mt19937 gen(rd()); //seed
    uniform_real_distribution<double> dis(0.0, 1.0);

    float random_num = dis(gen);

    bool hit = false;

    if(random_num > HIT_FACTOR * (*opponent).getLuck()) hit = true;
    if(hit) (*opponent).setHitsTaken((*opponent).getHitsTaken() + 1 );
}

/**
 * @brief prints in the format:
 * "Name: NPC_X    Hits Taken: X   Luck: 0.X00000   Exp: X0.000000 Level: X   Status: Alive or Dead"
 * 
 */
void RPG::printStats(){
    bool aliveStat = isAlive;
    printf("Name: %s\t Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\t Status: %s\n", name.c_str(), hits_taken, luck, exp, level, ((aliveStat) ? "Alive" : "Dead"));
}

/**
 * @brief Destroys the RPG::RPG object
 * 
 */
RPG::~RPG(){}
