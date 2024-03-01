#include <iostream>
using namespace std;
struct dist{
  int f;
  float i;
}d;
int main() 
{
  dist d[2];
  for(int i=0;i<2;i++){
    cin>>d[i].f;
    cin>>d[i].i;
  }
  for(int i=0;i<1;i++){
    int a=d[i].f+d[i+1].f;
    float b=d[i].i+d[i+1].i;
    if(b>=12)
    {
      b=b-12;
      a=a+1;
    }
  cout<<a<<"'-"<<b<<'"';
  }
    return 0;
}