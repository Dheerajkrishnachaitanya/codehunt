#include<stdio.h>

int main()
{
int n,i,j;
printf("\nEnter the no.of spaces:");
scanf("%d",&n);

int cost[n][4];

for(i=1;i<=n;i++)
{
    for(j=1;j<=4;j++)
    {
       scanf("%d ",&cost[i][j]);
    }
    printf("\n");
}















return 0;
}
