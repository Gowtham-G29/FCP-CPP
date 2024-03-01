#include <iostream>
using namespace std;

int main() 
{
int n,m;
  cin>>m>>n;
  for(int i=m;i<=n;i++)
  {
    int a=i/10;
    int b=i%10;
    int p=a+b;
    int s=a*b;
    int f=p+s;
    if (f==i)
      cout<<f<<endl;
    
  }

 
}