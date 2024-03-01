#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
  int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  float x3=((float)x1+x2)/2;
  float y3=((float)y1+y2)/2;
  cout<<fixed<<setprecision(1)<<"Arun's house is located at("<<x3<<","<<y3<<")";
    return 0;
}