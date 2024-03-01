

#include <iostream>
using namespace std;

int main(){
    
    int month;
    int rent;
    int days;
    
    cin>>month>>rent>>days;
    
    if(month<=12){
         if(month>=4&&month<=6||month>=11&&month<=12){
             int total =(rent*days)+(rent*days*0.20);
             cout<<total;
         }else{
             int total=(rent*days);
             cout<<total;
         }     
         }
    else{
       cout<<"Invalid Input";
   }
}
