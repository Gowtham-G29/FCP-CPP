#include <iostream>
#include <cstring>
using namespace std;

int main() 
{ 
  string a;
  cin>>a;
  int b=a.length();
  int count=0;
  for(int i=0;i<b;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='u'){
          count++;
        }
  }
  cout<<"Number of vowels: "<<count;
  
 
}