#include <iostream>
using namespace std;
int f(int n);
int main() 
{
  int n;
  cin>>n;
  cout<<"The term "<<n<<" in the Fibonacci series is "<<f(n);
}
int f(int n){
	if(n==1)
      return 0;
  	else if (n==2)
      return 1;
	return f(n-1)+f(n-2);
}