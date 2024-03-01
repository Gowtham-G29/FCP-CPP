#include <iostream>
using namespace std;
int arrSum(int arr[],int n);
int main() 
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<arrSum(arr,n-1);
}
int arrSum(int arr[],int n){
	if(n==0){
      return arr[n];
    }
  return arr[n]+arrSum(arr,n-1);
}