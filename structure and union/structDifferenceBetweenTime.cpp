#include <iostream>
using namespace std;

struct time{
   int hours;
   int mins;
   int sec;
}time1,time2;


int main() 
{
  cin>>time1.hours>>time1.mins>>time1.sec;
  cin>>time2.hours>>time2.mins>>time2.sec;
  
  cout<<"TIME DIFFERENCE: "<<time1.hours<<":"<<time1.mins<<":"<<time1.sec<<" - "<<time2.hours<<":"<<time2.mins<<":"<<time2.sec<<" = "<<time1.hours-time2.hours<<":"<<time1.mins-time2.mins<<":"<<time1.sec-time2.sec;
  
}