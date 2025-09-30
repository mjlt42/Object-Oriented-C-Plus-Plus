//main.cpp
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

int main(){

Pet pet1 = Pet("Athena", 10, "Donna",true);
Pet pet2 = Pet("Noah", 3, "Matthew",false);
Pet pet3 = Pet();

cout << pet1.getName() << "\n";
cout << pet1.getAge() << "\n";
cout << pet1.getOwner() << "\n";
cout << pet1.getIsHouseTrained() << "\n";

cout << "\n";
cout << pet2.getName() << "\n";
cout << pet2.getAge() << "\n";
cout << pet2.getOwner() << "\n";
cout << pet2.getIsHouseTrained() << "\n";

cout << "\n";
cout << pet3.getName() << "\n";
cout << pet3.getAge() << "\n";
cout << pet3.getOwner() << "\n";
cout << pet3.getIsHouseTrained() << "\n";

pet3.updateName("Vincent");
pet3.updateAge();
pet3.updateOwner("Ethan");
pet3.setHouseTrained();
cout << "\n";
cout << pet3.getName() << "\n";
cout << pet3.getAge() << "\n";
cout << pet3.getOwner() << "\n";
cout << pet3.getIsHouseTrained() << "\n";



}