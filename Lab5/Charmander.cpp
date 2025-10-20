#include <iostream>
#include <stdio.h>
#include "Charmander.h"

/**
 * @brief Contructs a new pokemon object (default)
 * 
 */
Charmander::Charmander() : Pokemon(){
    type.push_back("Fire");
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "Default Constructor (Charmander)\n";
}

/**
 * @brief Contructs a new pokemon object
 * 
 * @param name
 * @param hp
 * @param att
 * @param def
 * @param t
 */
Charmander::Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s)
: Pokemon(name, hp, att, def, t) {
    type = t;
    skills = s;
    cout << "Overloaded Contstructor (Charmander)\n";
}

/**
 * @brief says whatever charmander would say
 * 
 */
void Charmander::speak(){
    cout << "Charmander-char\n";
}

/**
 * @brief calls printStats from parent class (Pokemon) and adds/appends the skills that charmander uses
 * 
 */
void Charmander::printStats(){
    Pokemon::printStats();
    cout << "Skills: ";
    for(int i = 0; i < skills.size(); i++){
        cout << skills[i] << "\t";
    }
    cout << endl;
}
