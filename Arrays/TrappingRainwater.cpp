#include<iostream>
#include<vector>

using namespace std;

int RainwaterTrapped(vector<int> &v, int n)
{
    vector<int> left(n), right(n);
    left[0]=v[0];
    for(int i=1; i<n; i++) {
        left[i]=max(left[i-1], v[i]);
    }

    right[n-1]=v[n-1];
    for(int i=n-2; i>=0; i--) {
        right[i]=max(right[i+1], v[i]);
    }
    int area=0;
    for(int i=0; i<n; i++) {
        area+=(min(left[i], right[i])-v[i]);
    }
    return area;
}

int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<RainwaterTrapped(v, n);
}