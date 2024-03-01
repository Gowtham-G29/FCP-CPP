#include <iostream>

using namespace std;

int main(){

    int n;

    cin>>n; // 365

    if(n>=100&&n<=999){
         n= n/10;//36
         n=n%10;//6
        if(n%3==0){
             cout<<"Trendy Number";
        }else{
             cout<<"Not a Trendy Number";
        }
    }else{
        cout<<"Invalid Number";
    } 
}