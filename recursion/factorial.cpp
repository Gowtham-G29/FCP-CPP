#include <iostream>
using namespace std;

int fact(int n){
  if (n>0){
    return n*fact(n-1);
  }else{
    return 1;
  }
}
int main() 
{
int n;
  cin>>n;
  int result=fact(n);
  cout<<"The factorial of "<<n<<" is "<<result;
}