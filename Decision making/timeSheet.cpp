#include <iostream>
using namespace std;
int main() 
{
  int sun,mon,tue,wed,thur,fri,sat;
  cin>>sun>>mon>>tue>>wed>>thur>>fri>>sat;
  int total=0;
  if(sun>0){
    int t=(sun*100)+(sun*100*0.50);
    total=total+t;
  }
  if(sat>0){
    int t=(sat*100)+(sat*100*0.25);
    total=total+t;
  }
  if(mon>0){
    int t;
    if(mon>8){
      t=(mon*100)+((mon-8)*15);
    }
    else{
      t=(mon*100);
    }
    total=total+t;
  }
  if(tue>0){
    int t;
    if(tue>8){
      t=(tue*100)+((tue-8)*15);
    }
    else{
      t=(tue*100);
    }
    total=total+t;
  }
  if(wed>0){
    int t;
    if(wed>8){
      t=(wed*100)+((wed-8)*15);
    }
    else{
      t=(wed*100);
    }
    total=total+t;
  }
  if(thur>0){
    int t;
    if(thur>8){
      t=(thur*100)+((thur-8)*15);
    }
    else{
      t=(thur*100);
    }
    total=total+t;
  }
  if(fri>0){
    int t;
    if(fri>8){
      t=(fri*100)+((fri-8)*15);
    }
    else{
      t=(fri*100);
    }
    total=total+t;
  }
  cout<<total;
    return 0;
}