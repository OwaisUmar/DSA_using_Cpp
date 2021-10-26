#include<iostream>
using namespace std;

void unique(int arr[], int n)
{
    int res=0;
    for(int i=0; i<n; i++)
        res = res ^ arr[i];
    cout<<res;
}


int main()
{
    int arr[7]={6,4,3,3,4,6,2};
    unique(arr, 7);
    return 0;
}