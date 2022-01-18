#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr)
        cin>>i;
    int target;
    cin>>target;
    sort(arr.begin(), arr.end());
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        int low=i+1;
        int hi=n-1;
        while(low<hi)
        {
            int current=arr[i]+arr[low]+arr[hi];
            if(current==target)
            {
                flag=true;
                break;
            }
            else if(current<target)
                low++;
            else    
                hi--;
        }
        if(flag)
            break;
    }
    if(flag)
        cout<<"True\n";
    else    
        cout<<"False\n";
    return 0;
}