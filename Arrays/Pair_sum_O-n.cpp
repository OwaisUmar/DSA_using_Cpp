#include<iostream>
#include<climits>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    int hash[INT_MAX];
    for(int i=0; i<INT_MAX; i++)
        hash[arr[i]]=i;
    for(int i=0; i<n; i++)
    {
        int complement=target-arr[0];
        
    }

    
}


int main()
{
    int n, e;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"\nEnter array elements:\n";
    for(int i=0; i<n; i++)
        cin>>array[i];
    int k;
    cin>>k;
    cout<<pairsum(array, n , k);
    return 0;
}