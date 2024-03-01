#include <stdio.h>
int fun(int a[],int n,int max)
{
  if(n==-1)
    return max;
  else
    if(a[n]>max)
      max=a[n];
  return fun(a,n-1,max);
}
int main()
{
   int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   printf("Maximum element in the array is %d",fun(a,n-1,0));
   return 0;
}