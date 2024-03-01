#include <iostream>
#include <string>
using namespace std;
int main()
{
   string a,b;
  cin>>a>>b;
  int f=0;
  for(int i=0;i<b.length();i++)
  { f=0;
    for(int j=0;j<a.length();j++)
    {
      if(b[i]==a[j])
        f=1;
    }
   if(f==0)
     cout<<b[i];
  }
   return 0;
}