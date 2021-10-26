#include<iostream>
using namespace std;

int setbit(int n, int pos)
{
    return((n & 1<<pos));
}

void unique(int arr[], int n)
{
    int xorsum=0;
    for(int i=0; i<n; i++)
    {
        xorsum=xorsum^arr[i];
    }
    int pos=0;
    while(!setbit(xorsum, pos))
        pos++;
    int newxor=0;
    for(int i=0; i<n; i++)
        if(setbit(arr[i], pos))
            newxor = newxor ^ arr[i];

    cout<<newxor<<"  "<<(newxor^xorsum);
}       


int main()
{
    int arr[12]={6,4,3,3,4,6,2,1,1,2,9,0};
    unique(arr, 12);
    return 0;
}