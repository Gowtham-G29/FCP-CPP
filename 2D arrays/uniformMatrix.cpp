//uniformmatrix--> all the elements in matrix is odd or even

#include <iostream>

using namespace std;

int main() 
{
int n;
  int odd=0;
  int even=0;
  cin>>n;
  int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j]%2==0){
        even++;
      }else{
        odd++;
      }
    }
  }if(odd==0||even==0){
    cout<<"Yes";
  }else{
    cout<<"No";
  }
}

