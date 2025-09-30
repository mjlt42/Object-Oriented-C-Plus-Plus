//Pet.cpp
#include <iostream>
#include <string>
#include "Pet.h"

Pet::Pet(){
    name = "";
    age = 0;
    owner = "";
    isHouseTrained = false;  
}

Pet::Pet(string name, int age, string owner, bool isHouseTrained)
{
    this->name = name;
    this->age = age;
    this->owner = owner;
    this->isHouseTrained = isHouseTrained;  
}

//IMPLEMENT ACCESSOR Funcions later

/**
 * @brief returns the name
 * 
 * @return string 
 */
string Pet::getName(){
    return name; 
}

int Pet::getAge(){
    return age; 
}

string Pet::getOwner(){
    return owner; 
}

bool Pet::getIsHouseTrained(){
    return isHouseTrained; 
}



void Pet::updateName(string new_name){
    name = new_name;
}

void Pet::updateAge(){
    age++;
}

void Pet::updateOwner(string adopter ){
    owner = adopter;
}

void Pet::setHouseTrained(){
    isHouseTrained = true;
}

