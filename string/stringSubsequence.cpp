#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string a;
    string b;
    cin>>a>>b;
    int s1=a.length();
    int s2=b.length();
    int i=0,j=0;
    while ((i<s1&&j<=s2))
    {
        if(a[i]==b[j]){
            i++;
            j++;
        }else{
            i++;
        }
    }if(j>=s2){
        cout<<"1";
    }else{
        cout<<"0";
    }
    
}
