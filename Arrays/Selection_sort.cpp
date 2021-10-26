#include <iostream>
using namespace std;

void selectionsort(int arr[], int x)
{
    for (int i = 0; i < x - 1; i++)
        for (int j = i + 1; j < x; j++)
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
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
    selectionsort(array, n);
    return 0;
}