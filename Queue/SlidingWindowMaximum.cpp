#include<iostream>
#include<deque>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    deque<int> dq;
    int i=0;
    for(; i<k; i++)
    {
        while(!dq.empty() && arr[dq.back()]<arr[i])
            dq.pop_back();
        dq.push_back(i);
    }
    cout<<arr[dq.front()]<<" ";
    for(; i<n; i++)
    {
        while(!dq.empty() && dq.front()<=i-k)
            dq.pop_front();

        while(!dq.empty() && arr[dq.back()]<arr[i])
            dq.pop_back();
        dq.push_back(i);
        cout<<arr[dq.front()]<<" ";
    }

    return 0;
}