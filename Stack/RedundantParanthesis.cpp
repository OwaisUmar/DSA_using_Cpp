#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main() {
    string s;
    cin>>s;
    stack<char> st;
    int flag=0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='(')
            st.push(s[i]);
        else if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/')
            st.push(s[i]);
        else if(s[i]==')') {
            if(st.top()=='(') {
                flag=1;
                break;
            }
            while(st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/')
                st.pop();
            st.pop();
        }
    }
    cout<<flag<<endl;
}