#include<iostream>
using namespace std;

void swap(int arr[], int a, int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int partition(int arr[], int l, int r)
{
    int pivot=arr[r];
    int i=l-1;
    for(int j=l; j<r; j++)
        if(arr[j]<pivot)
            swap(arr, ++i, j);
    swap(arr, i+1, r);
    return i+1;
}

void quickSort(int arr[], int l, int r) 
{
    if(l<r)
    {
        int pi=partition(arr, l, r);
        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);
    }
}

int main()
{
    int arr[]={6, 5, 2, 8, 3, 9, 1};
    quickSort(arr, 0, 6);
    for(int i=0; i<7; i++)
        cout<<arr[i]<<" ";
    return 0;
}