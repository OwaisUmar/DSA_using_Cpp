#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    vector<int> mp(256, -1);
    int l=0, r=0, maxSubstr=0;
    while(r<str.size())
    {
        if(mp[str[r]]!=-1)
            l=max(mp[str[r]]+1, l);
        mp[str[r]]=r;
        maxSubstr=max(maxSubstr, r-l+1);
        r++;
    }
    cout<<maxSubstr<<endl;
    return 0;
}