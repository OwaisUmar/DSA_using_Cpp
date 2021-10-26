#include<iostream>
using namespace std;

int setbit(int n, int pos)
{
    return((n & 1<<pos));
}

int getbit(int n, int pos)
{
    return((n | 1<<pos));
}

void unique(int a[], int n)
{
    int res=0;
    for(int i=0; i<64; i++)
    {
        int sum=0;
        for(int j=0; j<n; j++)
            if(setbit(a[j], i))
                sum++;
        if(sum%3)        
            res=getbit(res, i); 
    }
    cout<<res;
}       


int main()
{
    int arr[7]={1,5,3,1,1,5,5};
    unique(arr, 7);
    return 0;
}