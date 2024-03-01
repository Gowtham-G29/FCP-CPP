#include <iostream>
using namespace std;

int main() 
{
	int n,m,f=0;
  	cin>>n;
  	int a[n];
  	for(int i=0;i<n;i++)
      cin>>a[i];
  	cin>>m;
 	int b[m];
  	for(int i=0;i<m;i++)
      cin>>b[i];
  if(n==m){
  	for(int i=0;i<n;i++){
    	if(a[i]==b[i] || a[i]>b[i] ){
          f=1;
        }
      	else{
          f=0;
      	  break;
        }
    }}
  	if(f==1)
      cout<<"Compatible";
  	else
      cout<<"Incompatible";
}