#include <iostream>
using namespace std;
int main() 
{
  int a,b,c,lb,bb;
  cin>>a>>b>>c;
  lb=a*(0.01*b);
  cout<<lb<<endl;
  bb=((a-(lb))*(0.01*c));
  cout<<bb<<endl;
  cout<<(a-lb-bb)/3;
}