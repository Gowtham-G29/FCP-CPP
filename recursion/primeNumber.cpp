#include <stdio.h>
int fun(int n,int i)
{
  if(i==1)
    return 1;
  else
    if(n%i==0)
      return 0;
  return fun(n,i-1);
}
  
int main()
{
  int n;
  scanf("%d",&n);
  int t=fun(n,n/2);
  if(t==1)
   printf("Prime Number ");
  else
    printf("Not a Prime Number");
   return 0;
}