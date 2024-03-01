#include <iostream>
using namespace std;
int main()
{
   int n,s1=0,s2=0;
  cin>>n;
  int a[n][n];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==j)
        s1 += a[i][j];
      if(i+j==n-1)
        s2 += a[i][j];
    }
  }
  if(s1==s2)
  	cout<<"Yes";
  else
    cout<<"No";
   return 0;
}