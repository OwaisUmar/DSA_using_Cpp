#include<iostream>
#include<stack>
using namespace std;

int precedence(char op)
{
    if(op=='^')
        return 3;
    else if(op=='/' || op=='*')
        return 2;
    else if(op=='+' || op=='-')
        return 1;
    return -1;
}

string infixToPotfix(string exp)
{
    string res="";
    stack<char> st;
    for(int i=0; i<exp.size(); i++)
    {
        if(exp[i]>='a' && exp[i]<='z' || exp[i]>='A' && exp[i]<='Z')
            res+=exp[i];
        else if(exp[i]=='(')
            st.push('(');
        else if(exp[i]==')')
        {
            while (!st.empty() && st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }           
            if(!st.empty())
                st.pop();
        }
        else
        {
            while(!st.empty() && precedence(exp[i])<precedence(st.top()))
            {
                res+=st.top();
                st.pop();
            }
            st.push(exp[i]);
        }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}

int main()
{
    string exp="(a-b/c)*(a/k-l)";
    cout<<infixToPotfix(exp)<<endl;
    return 0;
}
