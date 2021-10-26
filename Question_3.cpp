#include<iostream>
using namespace std;

int getLevel(int arr[], int n)
{
    int i=0;
    while(i<n)
    {
        if(arr[i]>arr[n])
            i++;
        else    
            n--;
    }
    return arr[i];
}   

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<getLevel(arr, n-1);
    return 0;
    
}