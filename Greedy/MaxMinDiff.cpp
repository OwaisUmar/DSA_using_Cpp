#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    sort(v.begin(), v.end());

    long long mind=0, maxd=0;

    for(int i=0; i<n/2; i++) {
        maxd+=(v[i+n/2]-v[i]);
        mind+=(v[i*2+1]-v[i*2]);
    }
    cout<<maxd<<" "<<mind<<endl;
    return 0;
}
