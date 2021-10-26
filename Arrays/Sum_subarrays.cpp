#include<iostream>
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
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n;  j++)
            {
                sum+=array[j];
                cout<<sum<<" ";
            }
        sum=0;
        cout<<endl;
    }

    return 0;
}