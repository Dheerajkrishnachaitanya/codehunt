#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int i;
printf("Enter the string:");

scanf("%[^\n]s",s);
printf("\n%s",s);

int l;
l=strlen(s);
int num,a[l],k=0,j,z;
for(i=0;i<l;i++)
    a[i]=0;
  for(i=0;i<l;)
  {
     if(s[i]=='-')
    {     i=i+4;
         num=0;
      for(j=1;j<=4;j++)
      {
          if(j==1) z=1000;
          else if(j==2) z=100;
          else if(j==3) z=10;
          else z=1;
          num=num+(s[i]*z);

          i=i+1;
      }

      i=i-1;
        for(j=0;j<l;j++)
      {
         if(a[j]==num)
            break;
      }
      if(j>=l)
      {
          a[k]=num;k=k+1;
      }

    }
i=i+1;
  }


printf("\n%d",k);





return 0;
}
