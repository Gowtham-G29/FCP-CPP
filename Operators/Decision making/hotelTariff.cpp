#include <iostream>
using namespace std;

int main() 
{
  int m,r,d;
  cin>>m>>r>>d;
  if(m>=1&&m<=12)
  {
    if(m==4||m==5||m==6||m==11||m==12)
    {
      cout<<(r+(r*0.20))*d;
    }
    else
      cout<<(r*d);
  }
  else
    cout<<"Invalid Input";
    return 0;
}