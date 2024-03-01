#include <iostream>
using namespace std;

int main() 
{
 int a=0;
  int b=1;
  int c,n;
  cin>>n;
 
  for(int i=3;i<=n;i++)
     { 
    c=a+b;
 
   a=b;
   b=c;
  }   
    cout<<c;
}