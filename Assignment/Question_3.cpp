#include<iostream>
using namespace std;

int lastBite(int arr[], int n)
{
    int l=0;
    int r=n-1;
    while(l<r)
    {
        if(arr[l]>arr[r])
            l++;
        else
            r--;
    }
    return arr[l];
}

int main()
{
    int T;
    cin>>T;
    int ans[T];
    for(int t=0; t<T; t++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        ans[t]=lastBite(arr, n);
    }
    for(int i=0; i<T; i++)
        cout<<ans[i]<<endl;
    return 0;
}