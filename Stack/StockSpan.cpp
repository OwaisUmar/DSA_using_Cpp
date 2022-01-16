#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    stack<int> st;
    st.push(0);
    vector<int> span(n);

    for(int i=0; i<n; i++)
    {
        while(!st.empty() && v[st.top()]<=v[i])
            st.pop();
        if(st.empty())
            span[i] = i+1;
        else
            span[i] = i-st.top();
        st.push(i);
    }
    for(int i=0; i<n; i++)
        cout<<span[i]<<" ";
    return 0;
}