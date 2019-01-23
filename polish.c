#include<stdio.h>
int top=-1;
void push(int x,int s[]);
void pop(int arr[]);
int main()
{
int n,i,a,b,c;
scanf("%d",&n);
char prefix[n+1];int st[n];
scanf("%s",prefix);
for(i=n-1;i>=0;i--)
{
  if(prefix[i]>='0' && prefix[i]<='9')
  {
      c=prefix[i]-48;
     push(c,st);
  }
   else{
      a=st[top];
      pop(st);
      b=st[top];
      pop(st);
     if(prefix[i]=='+')
     c=a+b;
     else if(prefix[i]=='-')
     c=a-b;
     else if(prefix[i]=='*')
     c=a*b;
     else
     c=a/b;

   push(c,st);

   }
}

printf("%d",st[top]);
return 0;
}

void push(int x,int s[])
{

top++;
s[top]=x;
//printf("%d",top]);

}

void pop(int arr[])
{
arr[top]='\0';
top--;

}
