#include<stdio.h>
const int m=1000000007;
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int n;
    long long a[3]; int i,j;
    for(i=0;i<3;i++)
        scanf("%lld",&a[i]);
    scanf("%d",&n);
    int p;
    for(i=3,j=0;i<=n;i++,j++)
    {
        //p=3*a[j%3]+2*i;
         p=(3*a[j%3]%m);
         p=(p+(2*i%m)%m)%m;
        if(j==0)
        {
            a[j%3]=(a[2]%m+p)%m;
        }
        else{
            a[j%3]=(a[(j-1)%3]%m+p)%m;
        }
    }

    printf("%lld\n",a[(j-1)%3]%m);
}
return 0;

}
