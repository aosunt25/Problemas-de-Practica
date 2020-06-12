//String Rotation
/*
Assume you have a method isSubstring which checks if one word is a substring of another.
Giving two strings s1 and s2, 
write code to check if s2 is a rotation of s1 using only one call to isSubstring 
*/

#include <iostream>
#include <string>

using namespace std; 

bool isRotation(string &str1, string &str2){
    if(str1.size() != str2.size()){
        return false;
    }

    string concatString = str1 + str1;

    if(concatString.find(str2) != string::npos){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s1, s2;
	cout << "Enter string 1 : ";
	cin >> s1;
	cout << "Enter string 2 : ";
	cin >> s2;
	if ( isRotation(s1, s2) ) {
		cout << "Yes! " << s2 << " is rotation of " << s1 << endl;
	} else {
		cout << "No! " << s2 << " is not a rotation of " << s1 << endl;
	}
	return 0;

}