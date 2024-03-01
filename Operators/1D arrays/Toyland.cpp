#include <stdio.h>
void swap(int a[],int b[],int n)
{
  for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if(b[i]>b[j])
        {
          int t=a[i];
          a[i]=a[j];
          a[j]=t;
          t=b[i];
          b[i]=b[j];
          b[j]=t;
        }
      }
    }
}
int main()
{
   int n,x,y;
  scanf("%d",&n);
  int a[n],b[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d%d",&a[i],&b[i]);
  }
   swap(a,b,n);
  int max=0;
  for(int i=0;i<n-1;i++)
  {
    if(b[i+1]-b[i]>max)
    {
      max=b[i+1]-b[i];
      x=a[i];
     y=a[i+1];
    }
  }
  if(x<y)
    printf("%d %d",x,y);
  else
    printf("%d %d",y,x);
   return 0;
}