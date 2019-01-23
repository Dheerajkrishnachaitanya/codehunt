#include<stdio.h>
#include<conio.h>
void print(int* p,int x);
void maximize(int *q,int y,int z);
  int main()
  {
    int n,i,r;
    printf("Enter the size of the array");
    scanf("%d",&n);
      int a[n];

    for(i=0;i<n;i++)
    {
        printf("\Enter a[%d] value",i);
        scanf("%d",&a[i]);
    }
      print(a,n);
printf("\nEnter the no.of blocks remaining");
    scanf("%d",&r);
   maximize(a,r,n);
      print(a,n);





  return 0;
  }
  void print(int* p,int x)
  {
      int j;
      for(j=0;j<x;p++,j++)
      {
          printf("%d ",*p);
      }
  }

  void maximize(int *q,int y,int z)
  {
    int b[y],small,k,l;
    int *t;
    t=q;
    while(y>0)
    {
        small=*q;
      for(k=0;k<z;k++,t++)
      {
          if(small>*t)
          {
              small=*t;
          }
      }
      t=q;
      for(k=0,l=0;k<z && l<y;k++,t++)
      {
           if(small==*t)
          {
              b[l]=k;
              l++;
          }
      }
      int f;

       for(f=0;f<l && y>0;f++)
       {    t=q;
           for(k=0;k<=b[f] && y>0;k++,t++)
           {
               if(k==b[f] && y>0)
               {
                   (*t)++;
                   y--;
               }
           }
        }

    }




  }
