#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1], b[n2];   //temp arrays
    
    for(int i=0; i<n1; i++)
        a[i]=arr[l+i];
    for(int i=0; i<n2; i++)
        b[i]=arr[i+mid+1];

    int i=0, j=0, k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
        }    
        else
        {
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        k++;
        j++;
    }
}


void mergeSort(int arr[], int l, int r)  //ascending order
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[]={6, 5, 2, 8, 3, 9, 1};
    mergeSort(arr, 0, 6);
    for(int i=0; i<7; i++)
        cout<<arr[i]<<" ";
    return 0;
}