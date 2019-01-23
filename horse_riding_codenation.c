#include<stdio.h>
#include<stdlib.h>

int main()
{int n,i,k;
printf("\nEnter the no.of horses:");
scanf("%d",&n);
int minutes[n];
printf("\nEnter the time taken by %d horses to complete ride:",n);
for(i=0;i<n;i++)
scanf("%d",&minutes[i]);
printf("\nEnter the no.of your position in the queue:");
scanf("%d",&k);
if(k<=n)
    printf("\nYou have to ride on horse number %d",k);
else if(k>n)
{
int small,j,index;
for(j=n+1;j<=k;j++)
{
 small=minutes[0];
index=0;
for(i=1;i<n;i++)
{     if(small>minutes[i]){small=minutes[i];
        index=i;
    }
}
if(j==k)
printf("\nYou have to ride on horse number %d",index+1);
for(i=0;i<n;i++)
 {if(i!=index)
    minutes[i]=minutes[i]-small;
 }
}
}return 0;
}
