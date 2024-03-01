#include <iostream>
using namespace std;

int main() 
{
 int units;
  cin>>units;
  if(units<=200){
      cout<<"Rs."<<(int)(units*0.5);
    }else if(units>200&&units<=400){
       cout<<"Rs."<<(int)(units*0.65)+100;
     }else{
       cout<<(int)(units*1.25)+425;
     }
}