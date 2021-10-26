#include<iostream>
using namespace std;

void subsets(int arr[], int n)
{
    for(int i=0; i<(1https://www.youtube.com/watch?v=WEpLyOc0bCE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=35
<<n); i++)
        {
        for(int j=0; j<n; j++)
            if(i & (1<<j))
                cout<<arr[j]<<" ";
        cout<<endl;
        }
}


int main()
{
    int arr[4]={1,2,3,4};
    subsets(arr, 4);
    return 0;
}