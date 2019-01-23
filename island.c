#include<stdio.h>
int n,m;
void count_of_islands(int arr[n][m],int x,int y);
int main()
{
    int i,j;
    printf("\nEnter the dimensions of the array:");
    scanf("%d%d",&n,&m);
    int a[n][m],count=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        scanf("%d",&a[i][j]);
    }
     //printf("\n");
    //for(i=1;i<=n;i++)
    //{
    //    for(j=1;j<=m;j++)
     //   printf("%d ",a[i][j]);
    //    printf("\n");
    //}

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
           if(a[i][j]==1)
           {
               count++;
               count_of_islands(a,i,j);
           }
        }
    }

printf("\nNo.of islands are:%d",count);

    return 0;
}
void count_of_islands(int arr[n][m],int x,int y)
{
   //int *ptr;
   //ptr=&arr[x][y];
    arr[x][y]=2;

          //rightside
          if(y<m && arr[x][y+1]==1)
          {
              count_of_islands(arr,x,y+1);
          }
          //bottom
          if(x<n && arr[x+1][y]==1)
          {
              count_of_islands(arr,x+1,y);
          }
          //left
         if(y>1&& arr[x][y-1]==1)
         {
             count_of_islands(arr,x,y-1);
         }
         //top
         if(x>1&&arr[x-1][y]==1)
         {
             count_of_islands(arr,x-1,y);
         }
         //top-right
         if((x>1&&y<m) && arr[x-1][y+1]==1)
         {
             count_of_islands(arr,x-1,y+1);
         }
         //bottom-right
         if((x<n&&y<m)&& arr[x+1][y+1]==1)
         {
             count_of_islands(arr,x+1,y+1);
         }
         //bottom-left
         if((x<n&&y>1)&& arr[x+1][y-1]==1)
         {
             count_of_islands(arr,x+1,y-1);
         }
         //top=left
         if((x>1&&y>1)&&arr[x-1][y-1]==1)
         {
             count_of_islands(arr,x-1,y-1);
         }

return;
}
