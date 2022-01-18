#include<iostream>
#include<algorithm>
using namespace std;

int maxLaptops(int arr[], int n, int k)
{
    sort(arr, arr+n);
    int i=0;
    int sum=0;
    int count=0;
    while(i<n && sum<=k)
    {
        sum+=arr[i];
        count++;
        i++;
    }
    return --count;
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<maxLaptops(arr, n, k);
    return 0;
    
}