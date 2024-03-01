#include <iostream>
using namespace std;
int main() 
{
  int row,col,pos;
  cin>>row>>col>>pos;
  int maxpos=row*col;
  if((pos>0 && pos<maxpos) && (pos<=col || pos%col==1 || pos%col==0 )){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
    return 0;
}