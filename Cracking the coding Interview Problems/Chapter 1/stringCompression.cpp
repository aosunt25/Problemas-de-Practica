// String compression 
/*
Implement a method to perform basic string compression using the counts of repeated characters.
For example, the string aabcccccaaa would become a2b1c5a3.
If the "compresssed" string would not becomesmaller taht the original string,
your method should return the original string
You can assume the string has only uppercase and lowercase letters
*/

#include <map>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string stringCompression(string &str){
    
    
    string strCompress;
    
    int counter = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]!= str[i+1])
        {
            ++counter;
            strCompress.push_back(str[i]);
            strCompress.append(to_string(counter));
            counter = 0;
        }
        else{
            ++counter;
        }
        
    }

    if(str.size() == strCompress.size()){
        return str;
    }
    else{
        return strCompress;
    }

}

int main(){
    
    string str, out;
	cout << "Enter a string:\n";
	cin >> str;
	out = stringCompression(str);
	if (str.compare(out)) {
		std::cout << str << " can be compressed to " << out << std::endl;
	} else {
		std::cout << str << " can not be compressed\n";
	}
	return 0;
}