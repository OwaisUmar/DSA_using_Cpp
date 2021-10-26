#include<iostream>
#include<algorithm>
using namespace std;

int maxLaptops(int arr[], int n, int k)
{
    sort(arr, arr+n);
    int i=0, sum=0;
    while(i<n && sum<=k)
    {
        sum+=arr[i];
        i++;
    }
    return --i;
}

int main()
{
    int T;
    cin>>T;
    int ans[T];
    for(int t=0; t<T; t++)
    {
        int n, k;
        cin>>n;
        cin>>k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        ans[t]=maxLaptops(arr, n, k);
    }
    for(int i=0; i<T; i++)
        cout<<ans[i]<<endl;
    return 0; 
}