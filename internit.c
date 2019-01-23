#include<stdio.h>

int main()
{
long long t;
scanf("%lld",&t);
while(t--)
{
long long n,s=0,sf=0,mul,div=1,i,h=1,j;
scanf("%lld",&n);
for(i=3;i<=n;i++)
{   s=0;
    s=s+i;
   for(j=i-2,div=1,h=1,mul=i-1;j>0 && mul>0;j--,mul--,div++)
   {
       h=(h*mul/div);
        s=s+(h*(mul));
   }
    sf=sf+s+1;

}
if(n>=2)
sf=sf+4;
else sf=sf+1;

printf("%lld\n",sf%1000000007);

}

return 0;
}
