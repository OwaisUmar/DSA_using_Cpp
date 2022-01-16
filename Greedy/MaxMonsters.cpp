#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int xp;
    cin>>xp;
    vector<int> P(n);
    for(int i=0; i<n; i++)
        cin>>P[i];
    vector<int> B(n);
    for(int i=0; i<n; i++)
        cin>>B[i];
    vector<pair<int, int>> PB(n);
    for(int i=0; i<n; i++)
    {
        PB[i].first=P[i];
        PB[i].second=B[i];
    }
    sort(PB.begin(), PB.end());
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(PB[i].first<=xp)
        {
            xp+=PB[i].second;
            count++;
        }
        else
            break;
    }
    cout<<count<<endl;
    return 0;
}