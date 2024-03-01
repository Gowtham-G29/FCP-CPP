#include <iostream>
using namespace std;

int main() 
{
 int n,m,sum=0,i,j;
  cin>>m>>n;
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i==0&&j<n||i==m-1&&j<n||i==1&&j==1){
          sum=sum+arr[i][j];     }
          }
       }
       cout<<"Sum of Zig-Zag pattern is "<<sum;
    }