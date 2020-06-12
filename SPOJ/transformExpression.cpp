/*
Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation). 
Two-argument operators: +, -, *, /, ^ (priority from the lowest to the highest), brackets ( ).
Operands: only letters: a,b,...,z. 
Assume that there is only one RPN form (no expressions like a*b*c).
*/

#include<iostream>
#include <stack>
using namespace std;

void transform(string &str){
    stack<char>stack2;
    string transform;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]==')'){
            char op = stack2.top();
            transform += op;
            stack2.pop();
            
        }
        else if(str[i]=='+' ||str[i]=='-' ||str[i]=='*' ||str[i]=='/' ||str[i]=='^'){
            stack2.push(str[i]);
        }
        else if(str[i]!='('){
            transform+=str[i];
        }
    }
    cout<<transform<<endl;
    
}

int main(){
    int count;
    cin>>count;
    for (size_t i = 0; i < count; i++)
    {
        string formula;
        cin>>formula;
        transform(formula);
    }

}