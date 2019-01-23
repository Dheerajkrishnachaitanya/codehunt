#include<stdio.h>
int top=-1;
void push(char x,char y[]);
void pop(char w[]);
int main()
{
int n,i;
scanf("%d",&n);
char a[n],stack[n];
int count[n/2],z=0;
printf("\nEnter the parenthesis string:");
fflush(stdin);
scanf("%[^\n]s",a);
printf("%s",a);
for(i=0;i<n/2;i++)
    count[i]=0;
for(i=0;a[i]!='\0';i++)
{
     if(a[i]=='(')
   push('(',stack);
    else{
         if(stack[top]=='(')
        {
            count[z]+=2;
            pop(stack);
        }
  else
        if(i!=0) z++;
     }
}
int b=0;
for(i=0;i<n/2;i++)
{
   if(b<count[i])
    b=count[i];
}
printf("\nLength of the longest balanced parenthesis prefix is %d",b);
return 0;
}
void push(char x,char y[])
{
    top=top+1;
    y[top]=x;
}
void pop(char w[])
{
    w[top]='\0';
    top-=1;


}
