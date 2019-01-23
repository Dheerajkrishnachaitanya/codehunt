#include<stdio.h>

int main()
{
int  n,m,i,j,x;
scanf("%d%d",&n,&m);
int a[n][m];
printf("\nEnter the  array values:");
for(i=1;i<=n;i++)
{
  for(j=1;j<=m;j++)
  {
  scanf("%d",&a[i][j]);
  }
}

printf("\nEnter the number to search----");
scanf("%d",&x);
int z;
z=m;
for(i=1;i<=n;i++)
{
    if(a[i][1]>x)
    {
    printf("\n%d is not found in the matrix A",x);
   break;
    }
   for(j=1;j<=z;j++)
   {
   if(a[i][j]==x)
   {
   printf("\n%d is found in the matrix at location a[%d][%d]",x,i,j);
   break;
   }

   if(a[i][j]>x)
   {
   z=j-1;
   break;
   }


   }
if(a[i][j]==x)
   {
   //printf("\n%d is found in the matrix at location a[%d][%d]",x,i,j);
   break;
   }



}
if(i>n)

printf("\n%d is not found in the matrix A",x);






return 0;
}
