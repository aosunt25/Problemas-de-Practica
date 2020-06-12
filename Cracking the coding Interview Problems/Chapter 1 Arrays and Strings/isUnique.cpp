//Is unique problems
/*
Description:
Implement an algorithm to determine if a string  has all unique characters.
What if you cannot use additional data structure?
*/
#include <string>
#include <vector>
#include <iostream>
#include <algorithm> //It is use fot sort() function 

using namespace std;

bool isUnique_noDS(string &str){
    
    //sorts the string with a O(nlogn)
    sort(str.begin(), str.end());
    
    bool noRepeat = true;

    //Checks if the position next to the value is the same, if it is the same it  breaks the for loop
    for (int i = 0; i < str.size(); i++)
    {
       if (str[i] == str[i+1])
       {
           noRepeat = false;
           break;
       }
       
    }
    //returns the variable noRepeate
    return noRepeat ;
}

int main(){
    //Examples of string 
    vector<string> words = {"abcde", "hello", "apple", "kite", "padle"};
    
    //For each word in words will call isUnique_noDS and print true or false
    for ( auto word : words){
        cout<<word<<" "<<isUnique_noDS(word)<<endl;
    }
}