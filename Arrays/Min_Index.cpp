#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n, e;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter array elements:\n";
    for(int i=0; i<n; i++)
        cin>>a[i];
    int N=1e5;
    int idx[N];
    for(int i=0; i<N; i++)
        idx[i]=-1;
    int minidx=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(idx[a[i]]!=-1)
            minidx=min(minidx, idx[a[i]]);
        else
            idx[a[i]]=i;
    }
    if(minidx==INT_MAX)
        cout<<"-1";
    else
        cout<<minidx+1;
    return 0;
}