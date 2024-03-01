#include <iostream>
using namespace std;
int main() 
{
   int age,year,income,stda;
   float schtst,atd;
   cin>>age>>year>>income>>stda>>schtst>>atd;
   if(18>=age<=21 && year>=2021 && income<=200000 && stda<=2 && schtst>=60 && atd>=80)
   {
     cout<<"Eligible";
   }
  else if(18>=age<=21 && year>=2021 && 200000>=income<=250000 && stda>2 && schtst>=80 && atd>=90)
  {
    cout<<"Partially Eligible";
  }
  else{
    cout<<"Not Eligible";
  }
  return 0;
}