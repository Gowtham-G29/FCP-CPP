#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int c=floor(log10(n))+1;
  int a[c];
  int i=c-1;
  while(n)
  {
    a[i--]=n%10;
    n=n/10;
  }
  for(i=0;i<c-1;i++)
  {
    int t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
    i++;
  }
  int ans=0;
    for(i=0;i<c;i++)
  		ans = ans*10 + a[i];
   cout<<ans;
   return 0;
}