#include <iostream>
using namespace std;

void bubblesort(int arr[], int x)
{
    for (int i = 1; i < x; i++)
        for (int j = 0; j < x-i; j++)
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    cout<<"Sorted arrays:"<<endl;
    for(int i=0; i<x; i++)
        cout<<arr[i]<<" ";

}

int main(void)
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int array[n];
    cout << "\nEnter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> array[i];
    bubblesort(array, n);
    return 0;
}