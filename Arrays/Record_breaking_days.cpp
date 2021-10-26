#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n, e;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n+1];
    cout<<"\nEnter array elements:\n";
    for(int i=0; i<n; i++)
        cin>>a[i];
    int mx=INT_MIN;
    a[n]=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(a[i]>mx && a[i]>a[i+1])
            {
            mx=a[i];
            cout<<mx<<endl;
            }
    }
    

    return 0;
}