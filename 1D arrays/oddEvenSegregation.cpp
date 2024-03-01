#include <iostream>
using namespace std;

int main() 
{
	int n;
  	cin>>n;
  	int a[n];
  	for(int i=0;i<n;i++)
      cin>>a[i];
  	cout<<"Array after Segregation"<<endl;
	int l=0,r=n-1;
  	while(l<r){
    	while(a[l]%2==0  && l<r)
        {
          l++;
        }
      while(a[r]%2!=0  && l<r){
         r--;
    }
        	int t=a[l];
          	a[l]=a[r];
          	a[r]=t;
      l++;
      r--;
    }
  	for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
  return 0;
}