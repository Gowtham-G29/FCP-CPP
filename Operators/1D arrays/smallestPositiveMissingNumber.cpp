#include <stdio.h>
int main()
{
   int n,f=0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  int i=1;
  while(i<=n)
  { f=0;
    for(int j=0;j<n;j++)
    {
      if(i==a[j])
      {
        f=1;
      }
    }
   if(f==0)
   {
     printf("%d",i);
     return 0;
   }
   i++;
  }
 printf("%d",n+1);
   return 0;
}