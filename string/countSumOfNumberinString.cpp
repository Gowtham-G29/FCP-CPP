#include <iostream>
#include <string>
using namespace std;
int main()
{
   string a;
  cin>>a;
  int ans=0,fans=0;
  for(int i=0;i<a.length();i++)
  {
    if(a[i]>='0'&&a[i]<='9')
      ans= ans *10 + (int)a[i]-'0';
    else
    {
      fans += ans;
      ans=0;
    }
  }
  fans += ans;
   cout<<fans;
   return 0;
}