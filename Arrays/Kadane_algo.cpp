#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n, e;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"\nEnter array elements:\n";
    for(int i=0; i<n; i++)
        cin>>array[i];
    int currsum=0, maxsum=INT_MIN;
    for(int i=0; i<n; i++)
    {
        currsum+=array[i];
        if(currsum<0)
            currsum=0;
        maxsum=max(maxsum, currsum);
    }
    cout<<maxsum;
    return 0;
}