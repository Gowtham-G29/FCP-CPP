#include <iostream>
using namespace std;


int main() {
   int year,month;
   cin>>year>>month;
   
   if(year>1990 && year<9999){
       if(month>0 && month<=12){
           if(month==1 ||month==3 ||month==5 ||month==7 ||month==8 ||month==10 ||month==12 ){
           cout<<"31 Days";}
           else if(month==6|| month==4|| month==9 || month==11){
               cout<<"30 Days"; }
           else if(month==2){
                if(year%4==0)
                cout<<"29 Days";
                else
                cout<<"28 Days"; }       
       }
       else{
           cout<<"not valid";
       }
   }
   else{
       cout<<"not valid year";
   }
   
 return 0;
}