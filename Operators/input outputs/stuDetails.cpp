#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
     string name;
     int age;
     float cgpa;
     char grade;
     
     cin>>name>>age>>cgpa>>grade;
     float cg=((int)(cgpa*100)/100.0);
     cout<<"Name: "<<name<<endl;
     cout<<"Age: "<<age<<endl;
     cout<<fixed<<setprecision(2)<<"CGPA: "<<cg<<endl;
     cout<<"Grade: "<<grade;
     
  
}