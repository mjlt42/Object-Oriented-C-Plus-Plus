//array.cpp
#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief prints the elements in the vector and their memory locations
 * 
 * @param v - vector of integers
 */

 void printMemVec(vector<int> v){
    printf("Vector - Each int is worth %lu bytes\n", v.size());
    for(int i = 0; i < v.size(); i++){
        printf("Value: %i at Memory Location: %p\n", v[i], &v);
    }

 }

 /**
  * @brief increments all of the elements in the v by 10
  * 
  * @param v - address to a vector of integers
  */
void incVecBy10(vector<int> &v){
   for(int i = 0; i < v.size(); i++)
   {
    v[i] += 10;
   }
}

int main(){

//create a constant int called SIZE that is of value 5
    const int SIZE = 5; 
//create a vector of integers called vec that can hold up to 5 elements
    vector<int> vec(SIZE);
//use a for loop to populate vec with the values 100 to 104
    for(int i = 0; i < SIZE; i++)
   {
    vec.push_back(100 + i);
   }

printf("Before Increment------------\n");
//call printMemVec(...) on vec
    printMemVec(vec);
//call inBy10(...) on vec
    incVecBy10(vec);



printf("After Increment-------------\n");
//call printMemVec(...) on vec to view changes
   printMemVec(vec);

// remove the last element of vec
   vec.pop_back();
//refer to doc

printf("After Pop-------------------\n");
//call printMemVec(...) on vec to view changes
   printMemVec(vec);

//append 101 and 102 at the end of vec
//refer to doc
   vec.push_back(101);
   vec.push_back(102);
printf("After Push-------------------\n");
//call printMemVec(...) on vec to view changes
    printMemVec(vec);
    return 0;
}

