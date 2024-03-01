#include <stdio.h> 
#include<iostream>
using namespace std;
int fun(int a[],int n,int sum)
{
  if(n==-1)
    return sum;
  else
    if(a[n]%2!=0 && a[n]>0)
     sum += a[n];
  return fun(a,n-1,sum);
}
int main()
{
   int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<"Sum = "<<fun(a,n-1,0);
  return 0;
}