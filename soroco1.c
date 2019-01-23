#include<stdio.h>


int main()
{
long int a,b;
scanf("%ld",&a);
long int small,digits=0;
b=a;
for(;a>0;)
{
    if(digits==0)
        small=a%10;
    else{
       if(a%10<small)
            small=a%10;
    }
    digits++;
    a=a/10;

}
a=b;
long int ar[digits],z=0,i,j,k;
long int arr[digits];
for(i=digits-1;i>=0;i--)
{

    arr[i]=a%10;
    a=a/10;

}a=b;
for(i=0;i<digits;i++)
{
        small=arr[i];z=0;
     for(j=i+1;j<digits;j++)
     {
         if(arr[j]<small)
         {
             small=arr[j];
         }
     }
     for(j=i+1;j<digits;j++)
     {
         if(small==arr[j])
            {
            ar[z]=j;
         z++;

            }
     }


if(small!=arr[i])
{
    k=small;
    arr[ar[z-1]]=arr[i];
    arr[i]=k;
    break;


}

}
b=0;
for(i=0;i<digits;i++)
{
    b=b*10+arr[i];

}

if(b==a)
printf("\nNot possible");
else
    printf("\nThe changed number is %ld",b);



return 0;
}
