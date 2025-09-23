//array.cpp
#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief prints the elements in the vector and their memory locations
 * 
 * @param v - vector of integers
 */

 void printMemArr(vector<int> v){
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
void incArrBy10(vector<int> &v){
   for(int i = 0; i < v.size(); i++)
   {
    v[i]= v[i] += 10;
   }
}

int main(){

//create a constant int called SIZE that is of value 5
    const int SIZE = 5; 
//create a vector of integers called vec that can hold up to 5 elements
    vector<int> vec(SIZE);
//use a for loop to populate vec with the values 100 to 104


printf("Before Increment------------\n");
//call printMemVec(...) on vec

//call inBy10(...) on vec


printf("After Increment-------------\n");
//call printMemVec(...) on vec to view changes


// remove the last element of vec
//refer to doc

printf("After Pop-------------------\n");
//call printMemVec(...) on vec to view changes


//append 101 and 102 at the end of vec
//refer to doc

printf("After Push-------------------\n");
//call printMemVec(...) on vec to view changes
    return 0;
}
