// URLify problem
/*
Write a method to replace all spaces in a string with '%20'.
Yo may assume that the string has sufficient space at the end to hold the additional chacaters,
and that you are given the 'true' length of the strign
(If implementing in Java, please use a chacarter array so that you can permorm this operation in place)
Example:
INPUT:  "Mr John Smith    ", 13
OUTPUT: "Mr%20John%20Smith"
*/

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void urlify(char *str, int len){

    int numOfSpaces = 0;
    int i = 0, j = 0;

    //Finds all the ' ' on the strings and for each it increases the value of numOfSpaces
    for ( i = 0; i < len; ++i ) {
        if (str[i] == ' ') {
            ++numOfSpaces;
        }
    }
    
    //It increases the length of the string to be able to add '%20'
    int extendedLen  = len + 2 * numOfSpaces;
    i = extendedLen - 1;

    //Runs backward the string and for each ' ' that finds between the words it adds the '%20'
    for( j = len - 1; j >= 0; --j ) {
        if ( str[j] != ' ' ) {
           str[i--] = str[j];
        } else {
            str[i--] = '0';
            str[i--] = '2';
            str[i--] = '%';
        }
    }
}

int main(){
    char str[] = "Mr John Smith    ";                       //String with extended length ( true length + 2* spaces)
    std::cout << "Actual string   : " << str << std::endl;
    urlify(str, 13);                                        //Length of "Mr John Smith" = 13
    std::cout << "URLified string : " << str << std::endl;
    return 0;
}