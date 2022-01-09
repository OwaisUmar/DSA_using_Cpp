#include<iostream>
#include<vector>

using namespace std;

int RainwaterTrapped(vector<int> &v, int n)
{
    int maxleft=v[0];
    int maxright=v[n-1];
    int left=1;
    int right=n-2;
    int area=0;
    while(left<=right) {
        if(maxleft<maxright) {
            if(v[left]<maxleft) 
                area+=maxleft-v[left];
            else 
                maxleft=v[left];
            left++;
        }
        else {
            if(v[right]<maxright) 
                area+=maxright-v[right];
            else 
                maxright=v[right];
            right--;
        }
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