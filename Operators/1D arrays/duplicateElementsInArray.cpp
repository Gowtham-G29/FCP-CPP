#include <iostream>
using namespace std;

int main() 
{
int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

   for(int i=0;i<n;i++){
     int f=1;
     for(int j=0;j<i;j++){
     if(a[i]==a[j] && i!=j)
     {
     f=0;
     break;
     }
     
     }
if(f==1)
  cout<<a[i]<<endl;
   }
}