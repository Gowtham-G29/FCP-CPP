#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
  string a;
  cin>>a;
  int flag=1;
  int b=a.length();
  for(int i=0;i<b;i++){
      if(a[i]!=a[b-i-1]){  // logic for palindrome
        flag=0;
        break;
        }
     }
  if(flag==1){
    cout<<"Palindrome";
  }else{
    cout<<"Not a Palindrome";
  }    
  
}