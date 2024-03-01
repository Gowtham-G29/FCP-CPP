#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int p,n,r;
  cin>>p>>n>>r;
  float total_interest = (p*n*r)/100;
  float discount=(total_interest*0.02);
  
  cout<<fixed<<setprecision(2)<<total_interest<<endl;
  cout<<fixed<<setprecision(2)<<p+total_interest<<endl;
  cout<<fixed<<setprecision(2)<<discount<<endl;
  cout<<fixed<<setprecision(2)<<(p - discount)+total_interest<<endl;
  
  
}