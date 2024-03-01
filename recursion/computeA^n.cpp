#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,p;
    cin>>m>>p;
    cout<<"The value of "<<m<<" power "<<p<<" is "<<pow(m,p);
}
int pow(int m,int p){
    if(m==0)
        return 1;
    else
        return m*pow(m,p-1);
}