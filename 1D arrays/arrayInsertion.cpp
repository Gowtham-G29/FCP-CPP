#include <iostream>
using namespace std;

int main() 
{
int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  int p,e;
  cin>>p>>e;
 
  if(p>n)
    cout<<"Invalid Input";
  else
  { cout<<"Array after insertion is"<<endl;
  for(int i=0;i<n;i++){
 if( i==p-1)
    cout<<e<<endl; 
  
  cout<<a[i]<<endl;
  }
  }
}