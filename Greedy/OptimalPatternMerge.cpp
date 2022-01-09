#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    priority_queue<int, vector<int>, greater<int>> min_heap;
    for(int i=0; i<n; i++) 
        min_heap.push(v[i]);
    int ans=0;
    while(min_heap.size()>1) {
        int n1=min_heap.top();
        min_heap.pop();
        int n2=min_heap.top();
        min_heap.pop();
        ans+=n1+n2;
        min_heap.push(n1+n2);
    }
    cout<<min_heap.top()<<endl<<ans<<endl;
    return 0;
}