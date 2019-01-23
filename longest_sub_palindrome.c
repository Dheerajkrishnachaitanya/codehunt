#include<stdio.h>
int main()
{
int n,i,j,k,l;
printf("\nEnter the no.of elemnts:");
scanf("%d",&n);
char a[n],b[n],c[n];
printf("\nEnter the string:");
scanf("%s",a);
int size=0,pal=0,v,u,x;
for(i=0;i<n;i++)
{
  for(j=i;j<n;j++)
  {
    for(k=i,l=0;k<=j;k++)
    {
    //printf("%c",a[k]);
    b[l]=a[k];
    l++;
    }
    //printf("\n");
    if(l>pal)
    {
    size=l;
        x=1;
       for(v=0,u=l-1;v<=u && x!=0 ;v++,u--)
       {
           if(b[v]!=b[u])
            x=0;
       }
       if(x!=0)
       {
           pal=l;
           for(v=0;v<l;v++)
               c[v]=b[v];
       }

      }

  }

//printf("\n\n");

}
printf("\nLongest palindrome:");
for(i=0;i<pal;i++)
{
    printf("%c",c[i]);
}

return 0;
}









