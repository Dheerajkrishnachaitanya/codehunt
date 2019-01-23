#include<stdio.h>
#include<stdlib.h>

//int a[5][5];
int r=1,s=1,t=5,u=5;
//void spiral(int *b,int p,int q);
int main()
{
int n,m,i,j;
//printf("Enter the no.of rows:");
//scanf("%d",&n);
//printf("Enter the no.of columns:");
//scanf("%d",&m);
n=5;m=3
;
int a[n][m];
for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
  {
   printf("\Enter a[%d][%d]",i,j);
   scanf("%d",&a[i][j]);
  }
}
for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
  {
   printf("%d ",a[i][j]);

  }
  printf("\n");
}


//spiral(a,n,m);
int count=0;
int p,q,t;
p=n;q=m;
for(;count<n*m;)
{

    for(t=r;t<=q && count<n*m;t++)
    {
        printf("%d ",a[r][t]);
        count++;
    }

    for(t=r+1;t<=p && count<n*m;t++)
    {
        printf("%d ",a[t][q]);
        count++;
    }

    for(t=q-1;t>=s && count<n*m;t--)
    {
        printf("%d ",a[p][t]);
      count++;
    }

    for(t=p-1;t>=r+1 && count<n*m;t--)
    {
        printf("%d ",a[t][s]);
        count++;
    }

    p--;
    q--;
    r++;
    s++;



}

return 0;
}



//void spiral(int *b,int p,int q)
//{

//    for(t=1;t<=q;t++,b++)
  //  {
//        printf("%d ",*b);

//    }
  //  t--;b--;
//  for(t=r+1;t<=p;t++,b=b+q)
//  {
//    printf("%d ",*(b+q));
//  }
  // t--;
   //for(t=q-1;t>=s;t--,b--)
   //{
     //  printf("%d ",*(b-1));

   //}
   //t++;
   //for(t=p-1;t>=r+1;t--,b=b-q)
   //{
    //printf("%d ",*(b-q));
   //}





//}
