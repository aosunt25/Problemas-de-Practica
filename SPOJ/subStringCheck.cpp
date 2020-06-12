/*
Given two binary strings, A (of length 10) and B (of length 5), 
output 1 if B is a substring of A and 0 otherwise.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool subStringCheck(string &str1, string &str2){
    size_t found = str1.find(str2);

    if(found!= string::npos){
        return true;
    }
    else{
        return false;
    }

}

int main(){
 string str1, str2;
 cin>>str1>>str2;
 cout<<subStringCheck(str1, str2)<<endl;
}