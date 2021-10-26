#include<iostream>
using namespace std;

int merge(int arr[], int l, int mid, int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1], b[n2];

    for(int i=0; i<n1; i++)
        a[i]=arr[i+l];
    for(int i=0; i<n2; i++)
        b[i]=arr[i+mid+1];

    int i=0, j=0, k=l, inv=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[i])
        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=b[j];
            j++;
            inv+=n1-i;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k]=a[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k]=b[j];
        j++;
        k++;
    }   
    return inv; 
    
}

int countInversion(int arr[], int l, int r)
{
    int mid =(l+r)/2;
    int inv=0;
    if(l<r)
    {
        inv+=countInversion(arr, l, mid);
        inv+=countInversion(arr, mid+1, r);
        inv+=merge(arr, l, mid, r);   
    }
    return inv;
}

int main()
{
    int arr[3]={3, 2, 1};
    cout<<countInversion(arr, 0, 2);
    return 0;
}