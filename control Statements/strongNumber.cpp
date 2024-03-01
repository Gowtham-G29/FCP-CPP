#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
  int s=0,n,n2,f=1;
  cin>>n;
  n2=n;
  while(n!=0){
    int n1=n%10;
    n=n/10;
    for(int i=n1;i>1;i--)
      f=f*i;
    s+=f;
    f=1;
  }
  if(s==n2)
    cout<<"Yes";
  else
    cout<<"No";
}