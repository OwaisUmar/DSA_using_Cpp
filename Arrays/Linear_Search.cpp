#include<iostream>
using namespace std;

int linearsearch(int arr[], int x, int a)
{
    for(int i=0; i<x; i++)
        if(arr[i]==a)
            return i+1; 
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
    cout<<linearsearch(array, n, e);
    return 0;
}