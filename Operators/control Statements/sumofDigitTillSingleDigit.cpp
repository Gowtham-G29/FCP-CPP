#include <iostream>
using namespace std;

int main() 
{
int n,c=0,s=0;
  cin>>n;
  while(n>9){
  while(n>0){
  c+=n%10;
  n=n/10;  
  }
    n=c;
    c=0;
  }
   cout<<n;
}