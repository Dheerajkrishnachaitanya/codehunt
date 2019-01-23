#include<iostream>

using namespace std;
int main()
{
struct time
{
    int start,last,flag=0;
};
int n,i;
cout<<"\Enter the no.of time intervals: ";
cin>>n;
struct time a[n];
for(i=0;i<n;i++)
{

    cout<<"\nEnter the time interval"<<i+1<<":";
    cin>>a[i].start>>a[i].last;
}

for(i=0;i<n;i++)
{
    cout<<"("<<a[i].start<<","<<a[i].last<<")";

}
int j,conflicts=0;
for(i=1;i<n;i++)
{
        for(j=0;j<i;j++)
    {
         if(((a[i].start>=a[j].start && a[i].start<a[j].last) || (a[i].last>a[j].start && a[i].last<a[j].last)) && a[j].flag==0 )
         {
             cout<<"\n("<<a[i].start<<","<<a[i].last<<") conflicts ("<<a[j].start<<","<<a[j].last<<")";
             conflicts++;
             a[j].flag=1;
         }
    }
}




cout<<"The no.of conflicts are"<<conflicts<<"\n\nAnd the minimum no.of rooms required are: "<<conflicts+1;




return 0;
}

