#include<iostream>
#include<queue>
using namespace std;

class stack
{
    queue<int> q1;
    queue<int> q2;
    int N;
    public:
    stack()
    {
        N=0;
    }

    void pop()
    {
        if(q1.empty())
            return;
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }

    void push(int val)
    {
        q1.push(val);     
        N++;
    }

    int top()
    {
        if(q1.empty())
            return -1;
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int x=q1.front();
        q2.push(x);
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        return x;
    }

    int size()
    {
        return N;
    }
};

int main()
{
    stack st;
    st.push(12);
    st.push(23);
    st.push(34);
    st.push(45);
    cout<<st.size()<<endl<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<endl<<st.size()<<endl;
    return 0;
}