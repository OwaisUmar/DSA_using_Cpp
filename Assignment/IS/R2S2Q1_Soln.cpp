// R2:S2:1. WAP to find Kth smallest number in an array.
// Eg: Array: 4, 6, 2, 0, -1
// Smallest Number: -1, 2nd Smallest number: 0, 3rd Smallest number: 2
// 4th smallest number: 4, 5th smallest number: 6

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(&arr[0],&arr[n-1]);
    for(int i=1; i<n; i++)
        for(int j=0; j<n-i; j++)
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    
    int k;
    cout<<"Enter value of k: ";
    cin>>k;
    cout<<"kth smallest no. is "<<arr[k-1]<<endl;
    return 0;
}