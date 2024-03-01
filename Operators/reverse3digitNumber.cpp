#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  int f=n/100;
  int l=n%10;
  int m=(n/10)%10;
 
  cout<<l<<m<<f;
}