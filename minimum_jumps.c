#include<stdio.h>

int main()
{
int n,i;
printf("\nEnter the size of array:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("\nEnter a[%d] value",i);
scanf("%d",&a[i]);
}
int range,high=0,jumps=0,index;
for(i=0;i<n-1;i=i+index)
{
high=0;
for(range=1;range<=a[i] && i+range<n;range++)
{
    if(i+range+a[i+range]>high && a[i+range!=0])
    {
        high=i+range+a[i+range];
         index=range;
    }
}
jumps++;
}
printf("\nMinimum no.of jumps are %d",jumps);
return 0;
}



