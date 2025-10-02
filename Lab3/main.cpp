//main.cpp
#include <iostream>
#include <string>
#include "RPG.h"
using namespace std;

int main (){

RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
RPG p2 = RPG();

printf("%s Current Stats\n", p1.getName().c_str());
printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p1.getHitsTaken(), p1.getLuck(), p1.getExp(), p1.getLevel());
printf("\n");
//Print stats for p2
printf("%s Current Stats\n", p2.getName().c_str());
printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p2.getHitsTaken(), p2.getLuck(), p2.getExp(), p2.getLevel());

//call setHitsTaken on either player

p2.setHitsTaken(1);

//print out hits taken

printf("\n%s hits taken: %i\n", p1.getName().c_str(), p1.getHitsTaken());
printf("%s hits taken: %i\n\n", p2.getName().c_str(), p2.getHitsTaken());

// call isAlive on both p1 and p2

printf("0 is dead, 1 is alive:\n");
printf("%s is %i\n", p1.getName().c_str(), p1.isAlive());
printf("%s is %i\n", p2.getName().c_str(), p2.isAlive());

return 0;

}
