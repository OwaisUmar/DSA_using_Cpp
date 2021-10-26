#include <iostream>
using namespace std;

void insertionsort(int arr[], int x)
{
    for (int i = 1; i < x; i++)
    {
        int counter = arr[i];
        int j = i - 1;
        while (counter < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = counter;
    }
    cout << "Sorted arrays:" << endl;
    for (int i = 0; i < x; i++)
        cout << arr[i] << " ";
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
    insertionsort(array, n);
    return 0;
}