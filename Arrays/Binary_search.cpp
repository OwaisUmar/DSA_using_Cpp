#include<iostream>
using namespace std;

int binarysearch(int arr[], int x, int key)
{
    int l=0;
    int h=x-1;
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
            return mid+1;
        else if(key<arr[mid])
            h=mid-1;
        else    
            l=mid+1;
    }
    return -1;
}


int main(void)
{
    int n, e;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"\nEnter array elements:\n";
    for(int i=0; i<n; i++)
        cin>>array[i];
    cout<<"Enter element to search: ";
    cin>>e;
    cout<<binarysearch(array, n, e);
    return 0;
}