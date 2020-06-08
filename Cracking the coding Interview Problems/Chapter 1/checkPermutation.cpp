//Check Permutation Problem
/*
Description:
Giving two strings, write a method to decide if one is a permutatios of the other
*/
#include <string>
#include <vector>
#include <iostream>
#include <algorithm> //It is use fot sort() function 

using namespace std;

//Checks if one string is a permutation of the other
//Returns a bool 
bool arePermutation(string str1, string str2){
    
    //If the size is different it cant be a permutation
    if(str1.size()!= str2.size()){
        return false;
    }

    //Sort both string to put the letters of the words in order 
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    bool arePermutation = true;
    
    //For each char on the string it checks if they are equal
    for (size_t i = 0; i < str1.size(); i++)
    {
       if(str1[i]!=str2[i]){
           arePermutation = false;
           break;
       }
    }
    return arePermutation;

}

int main(){
    
    cout << "Method 1 - Using sort" << endl;
    string str1 = "testest";
    string str2 = "estxest";
    if(arePermutation(str1, str2))
      cout << str1 <<" and " << str2 << " are permutation of each other" << endl;
    else
      cout << str1 <<" and " << str2 << " are not permutation of each other" << endl;
    str1 = "hello";
    str2 = "oellh";
    if(arePermutation(str1, str2))
      cout << str1 <<" and " << str2 << " are permutation of each other" << endl;
    else
      cout << str1 <<" and " << str2 << " are not permutation of each other" << endl;

}