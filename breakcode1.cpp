#include<iostream>
using namespace std;
int jolly(int x[],int y[],int s);
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,i,k;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];

  k=jolly(a,b,n);

cout<<k<<endl;


}

return 0;
}

int jolly(int x[],int y[],int s)
{

int p,q,m,high=0;
q=s-1;

while(q>=0)
{
    p=0;
    while(p<s)
    {
       if(q>=p && y[q]>=x[p])
       {
           m=q-p;
           if(m>high) high=m;
            break;
       }
        p++;
    }
   q--;

}
return high;
}
