#include<iostream>
using namespace std;




int main(void)
{
    int n, e;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"\nEnter array elements:\n";
    for(int i=0; i<n; i++)
        cin>>array[i];
    int mx=array[0];
    cout<<mx<<" ";
    for(int i=1; i<n; i++)
    {
        if(array[i]>mx)
            mx=array[i];
        cout<<mx<<" ";
    }

    return 0;
}