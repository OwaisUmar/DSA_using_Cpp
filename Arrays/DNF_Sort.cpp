#include<iostream>
using namespace std;

//Dutch National Flag Sort

void swap(int arr[], int a, int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void DNFsort(int arr[], int n)
{
    int l=0, mid=0, h=n-1;
    while(mid<=h)
    {
        if(arr[mid]==0)
        {
            swap(arr, mid, l);
            l++;
            mid++;
        }
        else if(arr[mid]==1)
            mid++;
        else
        {
            swap(arr, mid, h);
            h--;
        }
    }
}

int main()
{
    int arr[]={1, 2, 0, 0, 2, 1, 1, 2, 0};
    DNFsort(arr, 9);
    for(int i=0; i<9; i++)
        cout<<arr[i]<<" ";
    return 0;
} 