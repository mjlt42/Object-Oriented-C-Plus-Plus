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
* @brief sets hits_taken to new_hits
*
*/

void setHitsTaken(int new_hits){

}

/**
* @brief returns whether hits_taken is less than MAX_HITS_TAKEN
* In other words, a player is alive as long as they have not been hit MAX_HITS_TAKEN times.
*
* @return true : player is alive
* @return false : player is unalive
*/

bool isAlive(){

}
