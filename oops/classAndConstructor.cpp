#include <iostream>
using namespace std;

class Employee{
    
private:
  string Name;
  int Age;
  float Rating;
  
  void introduce(){
      cout<<"MY name is "<<Name<<endl;
      cout<<"My Age "<<Age<<endl;
      cout<<"The Rating is "<<Rating<<endl;
      
  }
  
  
public:


    string getName(){
        introduce();
        return Name;
    }
    int getAge(){
        return Age;
    }
    
    void setName(string name){
        Name = name;
    }
    
    void setAge(int age){
        if(age<=25)
            Age =age;
        else{
            cout<<"Employee Age Should be under than 25"<<endl;
        }
    }
    
  Employee(string name,int age,float rating){
      Name = name;
      Age = age;
      Rating = rating;
  }
  Employee(string name,float rating){
      Name = name;
      Age = 18;
      Rating = rating;
  }
  Employee (){
  }
};

int main(){
    Employee emp1 = Employee("Dhanush",23, 4.6);
    Employee emp2 = Employee("Ravi",4.6);
    Employee emp3;
    //emp2.introduce();
    cout<<emp1.getName()<<endl;
    emp1.setName("Hari");
    cout<<emp1.getName();
    emp1.setAge(27);
    cout<<emp1.getAge();

    //cin>>emp1.name;
    
    
    // cout<<"Employee NAME "<<emp1.Name<<endl<<emp1.Age<<endl<<emp1.Rating<<endl;
    // cout<<"Employee NAME "<<emp2.Name<<endl<<emp2.Age<<endl<<emp2.Rating<<endl;

    
    return 0;
}
