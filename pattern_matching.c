#include<stdio.h>

int main()
{
int n,i,x,count=0;
scanf("%d",&n);
char a[n];
for(i=0;i<n;i++)
{
    fflush(stdin);
scanf("%c",&a[i]);
}
x=0;
for(i=0;i<n;i++)
{
if(x==0)
    {
  if(a[i]=='1')
  x=1;
  else
  x=0;
    }
else if(x==1){
    if(a[i]=='1')
    x=1;
    else if(a[i]=='0')
        x=2;
    else
        x=0;
}
else{
    if(a[i]=='0')
        x=2;
    else if(a[i]=='1')
    {
        x=1;
      count++;
    }
    else
         x=0;
    }
}

printf("\n%d",count);
return 0;
}
