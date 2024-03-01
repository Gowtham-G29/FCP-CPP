#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
  string s;
  cin>>s;
  int a=s.length();
  for(int i=0;i<a;i++){
    for(int j=0;j<a-1;j++){
      if(s[j]>s[j+1]){
        int temp = s[j];
           s[j]=s[j+1];
           s[j+1]=temp;
      }
    }
    }
    cout<<s;
  
}