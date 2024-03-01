#include<iostream>
using namespace std;
int main()
{
  int m,n;
  cout<<"Enter n"<<endl;
  cin>>n;
  cout<<"Enter m"<<endl;
  cin>>m;
  cout<<"The multiplication table of "<<n<<" is"<<endl;
  for(int i=1;i<=m;i++){
     cout<<i<<"*"<<n<<"="<<i*n<<endl;
    
  }
}