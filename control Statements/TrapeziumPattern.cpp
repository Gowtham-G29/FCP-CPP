#include<iostream>
using namespace std;
int main(){
  int n,a=1,b;
  cin>>n;
  b=(n*n)+1;//assigning a=1,b=17 
  
  for(int i=n;i>=1;i--){
    for(int h=0;h<n-i;h++){//for printing hifan i.e first line has no hifan 
      cout<<"--";
    }
    for(int j=0;j<i;j++){//to print a value 1*2*3*4
       cout<<a<<"*";
       a++;
    }
    for(int k=0;k<i-1;k++){ //to print b value17*18*19  upto 19 bcoz after 20 there is no star
      cout<<b<<"*";
      b++;
    }
    cout<<b;//to print 20 without star
    b=b-2*(i-1);// to change the value from 20 t0 14 for next line
    cout<<"\n";
  }
//paattern has two parts a and b a=1*2*3*4 , b=17*18*19*120
  //second line has 6 numbers and 2 is missing so that hifan is compensated  
  return 0;
}