#include<iostream>
using namespace std;

void countSort(int arr[], int n)
{
    int count[20]={0};
    for(int i=0; i<n; i++)
        count[arr[i]]++;
    for(int i=1; i<n; i++)
        count[i]+=count[i-1];
    int output[n];
    for(int i=n-1; i>=0; i--)
        output[--count[arr[i]]]=arr[i];
    for(int i=0; i<n; i++)
        arr[i]=output[i];
}

int main()
{
    int arr[]={5, 2, 3, 8, 2, 3, 4, 8, 2};
    countSort(arr, 9);
    for(int i=0; i<9; i++)
        cout<<arr[i]<<" ";
    return 0;
} 