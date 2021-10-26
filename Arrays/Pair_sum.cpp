#include<iostream>
#include<climits>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
            if(arr[i]+arr[j]==k)
            {
                cout<<i<<" "<<j<<endl;
                return true;
            }
    }
    return false;
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