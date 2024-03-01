
// Write a program to generate the following series 0,2,8,14,...,34.

#include <iostream>
using namespace std;

int main() 
{
  int n,i;
  cin>>n;
  for(i=1;i<=n;i++){
   if(i%2==1){
     cout<<(i*i)-1<<" ";
     }
   else{
     cout<<(i*i)-2<<" ";
     
   }
    
  }
 
}