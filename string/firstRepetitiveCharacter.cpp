#include <iostream>
#include<string>
using namespace std;
int main() 
{
   string s;
  cin>>s;
  char n;
  int a=s.length();
  for(int i=0;i<a;i++){
      int f=1;
    for(int j=0;j<a;j++){
      if(s.at(i)==s.at(j)&&i!=j){
          f=0;
          break;
      }
    }
     if(f==1){
       n=s[i];
       break;
     }
  }    
    if(n)
      cout<<n;
    else
      cout<<"All the characters are repetitive";
  
    return 0;
}