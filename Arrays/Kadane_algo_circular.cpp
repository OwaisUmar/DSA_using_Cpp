#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n)
{
    int csum=0, maxsum=INT_MIN;
    for(int i=0; i<n; i++)
    {
        csum+=arr[i];
        if(csum<0)
            csum=0;
        maxsum=max(maxsum, csum);
    }
return maxsum;
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
    int wrapsum=0, nonwrapsum, arrsum=0;
    nonwrapsum = kadane(array, n);
    for(int i=0; i<n; i++)
    {
        arrsum+=array[i];
        array[i]= -array[i];
    }
    wrapsum=arrsum+kadane(array, n);
    cout<<max(wrapsum, nonwrapsum);
    return 0;
}