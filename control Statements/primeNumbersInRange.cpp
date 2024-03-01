#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  for(int i=2;i<=n;i++){
    int f=1;
    for(int j=2;j<=(i/2);j++){
      if(i%j==0){
        f=0;
        break;
      }
    }
    if(f==1)
      cout<<i<<" ";
  }
    return 0;
}