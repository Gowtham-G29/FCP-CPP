#include <iostream>
using namespace std;

int main() 
{
  int r,c;
  cin>>r>>c;
  int a[r][c];
  for (int i=0;i<r;i++){
    for (int j=0;j<c;j++){
      cin>>a[i][j];
    }
  }
  int sum=0;
  cin>>sum;
  for(int i=0;i<r;i++){
  	for(int j=0;j<c;j++){
    	if(i==0||i==(r-1)||(i==1&&j==1))
          sum=sum+a[i][j];
    }
  }
  cout<<"Sum of Zig-Zag pattern is "<<sum;
}