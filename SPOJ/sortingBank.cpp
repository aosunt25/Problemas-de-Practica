#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Bank{
    public:
    int n1, n2, n3, n4, n5 ,n6, repeat = 0;

};

int main(){
 int c, n;
 cin>>c;
 for(int i = 0; i<c ; i++){
     cin>>n;
     vector<Bank> cuentas;
     Bank cuenta;
     cin>>cuenta.n1>>cuenta.n2>>cuenta.n3>>cuenta.n4>>cuenta.n5>>cuenta.n6;
     cuentas.push_back(cuenta);
     for(int j = 1; j<n ; j++){
        bool rep = false;
        cin>>cuenta.n1>>cuenta.n2>>cuenta.n3>>cuenta.n4>>cuenta.n5>>cuenta.n6;
        for(auto z : cuentas){
            if (z.n1 == cuenta.n1 && z.n2 == cuenta.n2 && z.n3 == cuenta.n3 && z.n4 == cuenta.n4 && z.n5 == cuenta.n5 && z.n6 == cuenta.n6)
            {
                ++z.repeat;
                rep = true; 
                break;
            }  
        }
        if(!rep){
            cuentas.push_back(cuenta);
        }
     }
     for(auto j : cuentas){
         cout<<j.n1<<" "<<j.n2<<" "<<j.n3<<" "<<j.n4<<" "<<j.n5<<" "<<j.n6<<j.repeat<<endl;
     }
 }


}