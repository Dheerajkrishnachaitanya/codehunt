#include<stdio.h>
#include<string.h>

void check(char z[],char x[],char y[]);

int main()
{
char a[50],b[50],c[50];
//scanf("%s",a);
printf("\nEnter the string A:");
scanf("%s",a);
printf("\nEnter the string B:");
scanf("%s",b);
printf("\nEnter the string C:");
scanf("%s",c);
check(a,b,c);
return 0;
}

void check(char z[],char x[],char y[])
{
    int i,j,k,g;
    i=strlen(x);
    j=strlen(z);
    k=strlen(y);
    if((i+j)!=k)
    printf("\n%s is not interleaving of %s and %s",y,z,x);
else{

int r=0,s=0,p,q;
for(p=0;p<k;p++)
    {
    if(r<=j && y[p]==z[r])
        r++;
    else if(s<=i && y[p]==x[s])
        s++;

      else{
            printf("\n%s is not interleaving of %s and %s",y,z,x);
        break;
          }

     }

     if(p==k)
     printf("\n%s is interleaving of %s and %s",y,z,x);

  }


}
