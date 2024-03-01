#include <iostream>
using namespace std;

int sumof(int m,int n){

    if(m==n)
        return m;
    return m+sumof(m+1,n);//2+(3+(4))
    
    

   
}


int main(){
    int m=2, n=4;
    cout<<"sum="<<sumof(m,n);
    // for(int i=m;i<=n;i++){
    //     sum+=i;
    // }
    // cout<<sum;
    
}