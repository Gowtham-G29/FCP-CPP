#include <iostream>
using namespace std;

int main() 
{
	int n,c=0,m;
  	cin>>n>>m;
  	int a[n];
  	for(int i=0;i<n;i++)
      cin>>a[i];
  if(n>=1 && n<=100 ){
  	for(int i=0;i<n;i++){
      	int s=0;
      	if(a[i]==m)
          c=c+1;
    	else if(a[i]<m){
        	s=a[i]+a[i+1];
          	if(s>m){
           		c=c+1;
              	continue;
            }
          	else if(s==m){
              c=c+1;
              ++i;
            }
        }
      	else{
          c=c+1;
        }}}
cout<<c;
}