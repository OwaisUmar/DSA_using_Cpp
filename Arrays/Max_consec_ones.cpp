#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr)
        cin>>i;
    int k;
    cin>>k;
    int zerocount=0, l=0, maxones=0;
    for(int r=0; r<n; r++)
    {
        if(arr[r]==0)
            zerocount++;
        while(zerocount>k)
        {
            if(arr[l]==0)
                zerocount--;
            l++;
        }
        maxones=max(maxones, r-l+1);
    }
    cout<<maxones<<endl;
    return 0;
}