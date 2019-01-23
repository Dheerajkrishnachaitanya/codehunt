#include<iostream>
using namespace std;
int n,k=0;

void queen_check(int arr[],int num,int place);
int main()
{
  cin>>n;
int a[n];
queen_check(a,1,0);
if(!k) cout<<"Not possible to arrange";
return 0;
}

void queen_check(int arr[],int num,int place)
{  int i;
     for(i=1;i<=n;i++)
   {
      if(num!=1)
      {    int j;
            for(j=0;j<place;j++)
            {
                if(i!=arr[j] && i!=arr[j]+place-j && i!=arr[j]-place+j)
                {

                }
                else break;
            }
            if(j>=place){
                    arr[place]=i;
            if(num==n)
            {   int y; k=1;
                for(y=0;y<n;y++) cout<<" "<<arr[y];
                cout<<"\n";
                }

               else { queen_check(arr,num+1,place+1);             }

            }

      }
      else{
        arr[place]=i;
        queen_check(arr,num+1,place+1);

      }


   }


}
