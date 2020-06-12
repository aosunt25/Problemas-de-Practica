//One Array problem
/*
    There are three types of edits that can be performed on strings:
    Insert a character, remove a character, replace a character.
    Given two strings
    Write a function to check if they are one edit( ore zero edits) away
    EXAMPLE
    pale, ple -> true
    pale, bake -> false
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isOneAway(string str1, string str2){
    
    if ((str1.size() - str2.size()) > 1){
        
       return false;
    }
    bool frequency = false;
    for (int i = 0, j = 0; i < str1.size(), j<str2.size();)
    {
        if(str1[i]!= str2[j]){
            if(frequency){
                cout<<"Hola"<<endl;
                return false;
            }
            frequency = true;
            if (str1.size() == str2.size()){
                i++, j++;
            }
            else{
                i++;
            }
        }
        else{
            i++, j++;

        }
    }
    return true;
    
   
}


int main(){
    string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if(isOneAway(s1,s2))
		cout<<"One edit away."<<endl;
	else
		cout<<"Not one edit away."<<endl;
	return 0;
}