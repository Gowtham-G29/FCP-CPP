#include<iostream>
using namespace std;
int main()
{
  int num;
  cin>>num;
  
  if(num<0){
    num=num*(-1);
  }
  int f=num/1000;
  int l=num%10;
  cout<<f+l;
}

