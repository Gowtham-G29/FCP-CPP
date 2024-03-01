
//union

#include <iostream>
using namespace std;

 union stu_details{
    char grade;
    char roll[20];
    float mark;
    int fees;  
  }student;

int main() 
{
  cin>>student.grade;
  cout<<"Grade is: "<<student.grade<<endl;
  cin>>student.roll;
  cout<<"Rollno is: "<<student.roll<<endl;
  cin>>student.mark;
  printf("Mark is: %g\n",student.mark);
  cin>>student.fees;
  cout<<"Fees paid is: "<<student.fees;
}