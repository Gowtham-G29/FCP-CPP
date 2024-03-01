#include <iostream>
using namespace std;

int main() 
{
int n1,n2,i;
  int sum1=0;
  int sum2=0;
  cin>>n1>>n2;
  int a[n1];
  int b[n2];
  for( i=0;i<n1;i++){
    cin>>a[i];
    sum1=sum1+a[i];
     }
  for( i=0;i<n2;i++){
     cin>>b[i];    
     sum2=sum2+b[i];
    }
  for(i=0;i<n1;i++){
  if(a[i]==b[i]){
      if(n1==n2){
      if(sum1=sum2){
    cout<<"Same";
    break;
   }}
   }else{
    cout<<"Not Same";
    break;
    }
  }
  
  
}