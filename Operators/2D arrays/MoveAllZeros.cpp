#include <iostream>
using namespace std;
void fun(int n)
{
  int c=0;
  while(n)
  {
    if(n%10==1)
      cout<<n%10;
    else
      c++;
    n=n/10;
  }
 for(int i=0;i<c;i++)
   cout<<"0";
 cout<<"\n";
}
int main()
{
   int t,n;
  cin>>t;
  while(t)
  {
    cin>>n;
    fun(n);
    t--;
  }
   return 0;
}