#include <iostream>
using namespace std;

int main() 
{
int n,flag=1;
  cin>>n;
  int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
         if(arr[i][j]!=0){
           flag=0;
           break;
       }
    }
  }
  if(flag==1){
    cout<<"Upper triangular matrix";
  }else{
    cout<<"Not an Upper triangular matrix";
  }
}