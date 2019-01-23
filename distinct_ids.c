#include<stdio.h>

struct item{
int x,count;
};

int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc>0)
    {
    int n,m,i;

        scanf("%d",&n);

        int a[n];
     struct item b[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[i].count=0;
b[i].x='a';
}
          scanf("%d",&m);
int k=0,j;

for(i=0;i<n;i++)
{
     for(j=0;j<n;j++)
   {
       if(b[j].x==a[i])
        break;
   }
   if(j>=n)
   {
       b[k].x=a[i];
       b[k].count++;
       k++;
   }
   else
    b[j].count++;


}


int small,index;
while(m>0)
{
small=b[0].count;
index=0;
for(i=1;i<k;i++)
{
if(small==0)
{
    for(j=1;j<k;j++)
    {
       if(b[j].count>0)
        break;
    }
small=b[j].count;
index=j;
}
if(b[i].count!=0 && small>b[i].count )
{
    small=b[i].count;
    index=i;
}

}

for(;b[index].count>0 && m>0;)
{
    b[index].count--;
    m--;
}
}
int distinct=0;
for(i=0;i<k;i++){

    if(b[i].count>0)
    {
        distinct+=1;
    }
}
printf("%d",distinct);
tc--;
    }
return 0;
}
