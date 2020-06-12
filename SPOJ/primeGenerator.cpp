/*
Peter wants to generate some prime numbers for his cryptosystem. 
Help him! Your task is to generate all prime numbers between two given numbers!

Input
The input begins with the number t of test cases in a single line (t<=10). 
In each of the next t lines there are two numbers m and n 
(1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

Output
For every test case print all prime numbers p such that m <= p <= n, 
one number per line, test cases separated by an empty line.
*/

#include <iostream>

using namespace std;

bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
  
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
void primeNumber(int num1, int num2){
    if(num1 == 1){
        num1+=1;
    }
    for (int n = num1; n <= num2; n++)
    {
        if(isPrime(n)){
            cout<<n<<endl;
        }
    }
    cout<<endl;
}

int main(){
    int runtimes, num1, num2;
    cin>>runtimes;
    for (int i = 0; i < runtimes; i++)
    {
       cin>>num1>>num2;
       cin.ignore();
       primeNumber(num1, num2);
    }
    
}