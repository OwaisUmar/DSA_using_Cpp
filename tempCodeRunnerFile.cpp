#include<iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if(n==1)
        return 1;
    return (arr[0]<arr[1] && sorted(arr+1, n-1));
}
 
int main()
{
    int a[]={1,8,3,4,5};
    cout<<sorted(a, 5);
    return 0;

}