#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tb,tr,rs,bb,z1,z2,zz;
    cin>>tb>>tr>>rs>>bb;
    zz=tb/6;
    z1=bb/6;
    z2=bb%6;
    float z3=z1+z2*.1;
    float z4=rs/z3;
    float ans=(float)tr/zz;
    cout<<zz<<endl;
    cout<<fixed<<setprecision(1)<<z3<<endl;
    cout<<fixed<<setprecision(1)<<z4<<endl;
    cout<<fixed<<setprecision(1)<<ans<<endl;
    if(z4>ans)
      cout<<"Eligible to Win";
    else
      cout<<"Not Eligible to Win";
  return 0;
}