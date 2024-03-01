#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  
  int teams =a/b;
  int left =a%b;
  
  cout<<"The number of friends in each team is "<<teams<<" and left out is "<<left;
}
