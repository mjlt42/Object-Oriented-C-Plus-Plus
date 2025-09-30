//Pet.H
#ifndef Pet_H
#define Pet_H
#include <string>

using namespace std;

class Pet
{
private:

    string name;
    int age;
    string owner;
    bool isHouseTrained;
    
public:
    //Constructors
    Pet();
    Pet(string name, int age, string owner, bool isHouseTrained);

    //mutators
    const bool isAlive();
    void setHitsTaken(int new_hits);

    void updateName(string name);
    void updateAge();
    void updateOwner(string adopter);
    void setHouseTrained();

    //accessors
    string getName();
    int getAge();
    string getOwner();
    bool getIsHouseTrained();
};
#endif
