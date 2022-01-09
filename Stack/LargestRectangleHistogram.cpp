#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int LargestRectangleArea(vector<int> &v, int n) {
    vector<int> left(n), right(n);
    stack<int> st;
    
    for(int i=0; i<n; i++) {
        while(!st.empty() && v[st.top()]>=v[i])
            st.pop();
        left[i]=st.empty()?0:(st.top()+1);
        st.push(i); 
    }

    while(!st.empty())
        st.pop();

    for(int i=n-1; i>=0; i--) {
        while(!st.empty() && v[st.top()]>=v[i])
            st.pop();
        right[i]=st.empty()?n-1:(st.top()-1);
        st.push(i); 
    }

    int maxArea=0;
    for(int i=0; i<n; i++)
        maxArea=max(maxArea, (right[i]-left[i]+1)*v[i]);
    return maxArea;
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
    cout<<LargestRectangleArea(v, n);
}