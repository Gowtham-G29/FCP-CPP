
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    float total_balls{0};
    float runs{0};
    float runs_scored{0};
    float balls_completed{0};

    cin>>total_balls>>runs>>runs_scored>>balls_completed;

    float overs=total_balls/6;
    cout<<overs<<endl;
    float overs_completed = ((balls_completed/6));
    cout<<fixed<<setprecision(1)<<(float)overs_completed<<endl;
    float current_runRate =(runs_scored/balls_completed);
    cout<<fixed<<setprecision(1)<<(float)current_runRate<<endl;
    float total_runRate = runs/50;
    cout<<fixed<<setprecision(1)<<(float)total_runRate<<endl;

    if(total_runRate>=current_runRate){
        cout<<"Eligible to win";

    }else{
        cout<<"You lose";
    }
}