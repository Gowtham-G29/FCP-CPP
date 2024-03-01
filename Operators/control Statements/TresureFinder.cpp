#include <iostream>
using namespace std;

int main() 
{
  int b1,b2,b3,max;
  cin>>b1>>b2>>b3;
  int dup1=b1;
  int dup2=b2;
  int dup3=b3;
  if ((b1>b2 && b1>b3) || (b1<b2 && b1<b3))
  {
    b1=0;
    if((b2>dup1 && b3<b2) || (b2<dup1 && b2<b3))
    {
        b2=0;
        
        if((b3>dup1 && b3>dup2) || (b3<dup1 && b3<dup2))
        {
            b3=0;
        }
        else
        {
            max=b3;
        }
    }
    else
    {
        max=b2;
    }
  }    
  else
  {
    max=b1;
  }
int clue=1;
  for(int i=1;i<=max;i++)
  {
    if(dup1%i==0 && dup2%i==0 && dup3%i==0)
    {
      clue=clue*i;
    } 
  }
  cout<<"The treasure is in the box which has the number "<<max<<"\n";
  cout<<"The code to open the box is "<<clue;}