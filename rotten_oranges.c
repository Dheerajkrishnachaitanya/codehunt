#include<stdio.h>

int main()
{
int r,c,i,j,k;
printf("\nEnter the no.of rows and columns:");
scanf("%d %d",&r,&c);
int a[r][c];
printf("\nEnter the array values with 0,1,2\n");
for(i=1;i<=r;i++)
{
  for(j=1;j<=c;j++)
    scanf("%d",&a[i][j]);
printf("\n");
}
for(k=1;k<=r;k++)
{
  for(j=1;j<=c;j++)
  {
    printf("%d ",a[k][j]);
  }
printf("\n");

}
int previous,current=0,p,q;
previous=current+1;
for(i=0;previous!=current;)
{
    previous=current;i++;
    for(j=1;j<=r;j++)
    {
        for(k=1;k<=c;k++)
        {
           if(a[j][k]==1)
           {
              if(j-1>=1)
              {
                  if(a[j-1][k]==2)
                  {
                      a[j][k]=4;current++;
                  }
              }
              if(j+1<=r)
              {
                  if(a[j+1][k]==2)
                  {
                      a[j][k]=4;current++;
                  }
              }
              if(k-1>=1)
              {
                  if(a[j][k-1]==2)
                  {
                      a[j][k]=4;current++;

                  }
              }
              if(k+1<=c)
              {
                  if(a[j][k+1]==2)
                  {
                      a[j][k]=4;current++;
                  }
              }
          }

        }
    }

              p=1;q=1;
              while(p<=r)
              {q=1;
                  while(q<=c)
                  {
                      if(a[p][q]==2 || a[p][q]==4)
                        a[p][q]=2;
                      q++;
                  }

                 p++;
              }
}
for(k=1;k<=r;k++)
{
  for(j=1;j<=c;j++)
  {
    printf("%d ",a[k][j]);
  }
printf("\n");

}
current=0;
for(j=1;j<=r;j++)
{
    for(k=1;k<=c;k++)
    {
        if(a[j][k]==1)
        {
            current=1;
        }


    }



}

if(current==1)
    printf("\nNoo");
else
printf("\nMinimum steps= %d",i-1);
return 0;
}
