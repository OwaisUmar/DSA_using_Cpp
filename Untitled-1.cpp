#include<iostream>
using namespace std;

int linearsearch(arr[], x, a)
{
    for(int i=0; i<x; i++)
        if(arr[i]==a)
            return i; 
    return -1;
}
int main()
{
    int n, array[n], e;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"\nEnter array elements:\n"
    for(int i=0; i<=n; i++)
        cin>>array[i];
    cout<<"Enter element to search: ";
    cin>>e;
    cout<<e<<linearsearch(array[], n, e)==-1?" not found!":" found!";
    return 0;
}