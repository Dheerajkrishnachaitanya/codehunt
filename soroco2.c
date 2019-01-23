#include<stdio.h>

int main()
{
    int n,x,i,k,l=0;
printf("Enter the size of the string");
scanf("%d",&n);
char s[n];
printf("\nEnter the string:");
scanf("%s",s);
printf("%s",s);
printf("\nEnter the character place to read:");
scanf("%d",&x);
int f=0,g,j;
for(i=0;i<n || x!=0;)
{
if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
{
    k=s[i]-48;
    //printf("%d",k);
}
for(i=i+1,l=0;!(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')&&i<n;i++)
{
   if(l==0)
    j=i;
    l++;
//printf("%d",l);
}
if(k*l>=x)
{
        //printf("\nThe character in the string is %c",s[((x-1)%l)+j]);
        for(g=0,f=0;g!=x;)
        {
           g++;
           f++;
           if(g==x)
           {
               printf("\nThe character in the string is %c",s[j+f-1]);

           }
           if(f==l)
           {
               f=0;
           }
        }
    x=0;

}
else{
    x=x-k*l;
}

}






return 0;
}
