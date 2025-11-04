//RPG.H
#ifndef RPG_H
#define RPG_H
#include <string>
#include <random>

using namespace std;
//const int INVENTORY_SIZE = 10;
const float HIT_FACTOR = 0.05;
const int MAX_HITS_TAKEN = 3;
class RPG
{
private:

    string name;
    int hits_taken;
    float luck;
    float exp;
    int level;
    
public:
    //Constructors
    RPG();
    RPG(string name, int hits_taken, float luck, float exp, int level);

    //mutators
    const bool isAlive();
    void setHitsTaken(int new_hits);

    //accessors
    const string getName();
    const int getHitsTaken();
    const float getLuck();
    const float getExp();
    const int getLevel();

    //Extended
    void setName(string name);
    void updateExpLevel();
    void attack(RPG* opponent);
    void printStats();
    ~RPG();
};
#endif
