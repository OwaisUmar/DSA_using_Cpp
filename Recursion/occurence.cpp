#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
    if(i==n)
        return -1;
    if(arr[i]==key)
        return i;
    firstocc(arr, n, i+1, key);
}

int lastocc(int arr[], int n, int i, int key)
{
    if(i==n)
        return -1;
    int restarr=lastocc(arr, n, i+1, key);
    if(restarr!=-1)
        return restarr;
    if(arr[i]==key)
        return i;
    return -1;
}

int main()
{
    int arr[]={1,2,7,1,2,7};
    cout<<firstocc(arr, 6, 0, 7)<<endl<<lastocc(arr, 6, 0, 7);

    return 0;

}