#include <iostream>

using namespace std;

int main(){
    int sun,mon,tue,wed,thu,fri,sat;

    cin>>sun>>mon>>tue>>wed>>thu>>fri>>sat;

    int total =0;

    if(sun>0){
        int t =(sun*100)+(sun*100*0.50);
        total+=t;
        
    }
    if(sat>0){
        int t = (sat*100)+(sat*100*0.25);
        total+=t;
    }
    if(mon>0){
        int t;
        if(mon>0){
            t=(mon*100)+((mon-8)*15);
        }else{
            t=(mon*100);

        }
        total+=t;
    }
        if(tue>0){
        int t;
         if(tue>0){
            t=(tue*100)+((tue-8)*15);
        }else{
            t=(tue*100);

        }
        total+=t;
    }
        if(wed>0){
        int t;
        if(wed>0){
            t=(wed*100)+((wed-8)*15);
        }else{
            t=(wed*100);

        }
        total+=t;
    }
        if(thu>0){
        int t;
        if(thu>0){
            t=(thu*100)+((thu-8)*15);
        }else{
            t=(thu*100);

        }
        total+=t;
    }
        if(fri>0){
        int t;
        if(fri>0){
            t=(fri*100)+((fri-8)*15);
        }else{
            t=(fri*100);

        }
        total+=t;
    }
        if(sat>0){
        int t;
        if(sat>0){
            t=(sat*100)+((sat-8)*15);
        }else{
            t=(sat*100);

        }
        total+=t;
    }
    cout<<total;
}