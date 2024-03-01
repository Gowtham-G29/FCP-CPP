#include <stdio.h>
int main()
{
   int n,m,sum=0,max=0,f=0;
  scanf("%d%d",&n,&m);
  int a[n][n];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("The Sum of rows is ");  //row
  for(int i=0;i<n;i++)
  { sum=0;
    for(int j=0;j<m;j++)
    {
      sum += a[i][j];
    }
    printf("%d ",sum);
   if(sum > max)
   {
     max=sum;
     f=i+1;
   }
  }
  printf("\nRow %d has a maximum sum",f);
  //col
    printf("\nThe Sum of columns is ");
  max=0;
  for(int i=0;i<n;i++)
  { sum=0;
    for(int j=0;j<m;j++)
    {
      sum += a[j][i];
    }
    printf("%d ",sum);
   if(sum > max)
   {
     max=sum;
     f=i+1;
   }
  }
  printf("\nColumn %d has the maximum sum",f);
   return 0;
}