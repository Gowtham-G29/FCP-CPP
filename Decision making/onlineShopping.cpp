#include<iostream>
using namespace std;
int main()
{
  int fkp,fkd,fks,sdp,sdd,sds,anp,ad,ans;
  cin>>fkp>>fkd>>fks>>sdp>>sdd>>sds>>anp>>ad>>ans;
  int f=fkp-(fkp*(fkd*0.01))+fks;
  int s=sdp-(sdp*(sdd*0.01))+sds;
  int a=anp-(anp*(ad*0.01))+ans;
  cout<<"In Flipkart: Rs."<<f<<endl;
  cout<<"In Snapdeal: Rs."<<s<<endl;
  cout<<"In Amazon: Rs."<<a<<endl;
  if(f<=s&&f<=a){
  cout<<"Choose Flipkart";
  }
  else if(s<=f && s<=a)
    cout<<"Choose Snapdeal";
  else 
    cout<<"Choose Amazon";
}