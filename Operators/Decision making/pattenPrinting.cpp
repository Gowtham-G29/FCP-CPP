#include <iostream>

using namespace std;
 int main(){
    int n,t=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }for(int k=1;k<=t;k++){
            cout<<"*";
        }
        t=t+2;
        cout<<endl;
    }
 }