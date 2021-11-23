#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s)
{
    stack<string> st;
    for(int i=0; i<s.length(); i++)
    {
        string w="";
        while(s[i]!=' ' && i<s.length())
        {
            w+=s[i];
            i++;
        }
        st.push(w);
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    string s="Hello, how are you doing?";
    reverseSentence(s);
    return 0;
}