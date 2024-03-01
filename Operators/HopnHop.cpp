#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
int x2,y2;
  int x1=3;
  int y1=4;
  
  cin>>x2>>y2;
  int mid =sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
  
  cout<<mid;
}