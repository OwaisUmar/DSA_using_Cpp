#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n, s;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter array elements:\n";
    for(int i=0; i<n; i++)
        cin>>a[i];
    int N=1e6;
    bool check[N];
    for(int i=0; i<N; i++)
        check[i]=false;
    for(int i=0; i<n; i++)
        if(a[i]>=0)
            check[a[i]]=true;
    for(int i=1; i<n; i++)
        if(check[i]==false)
            {
                cout<<i;
                break;
            }
    return 0;
}