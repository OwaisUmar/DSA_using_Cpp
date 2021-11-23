#include<iostream>
#include<stack>
using namespace std;

class queue
{
    stack<int> st;   
    public:
    void push(int x)
    {
        st.push(x);
    } 

    int pop()
    {
        if(st.empty())
        {
            cout<<"Queue Underflow\n";
            return -1;
        }
        int topval=st.top();
        st.pop();
        if(st.empty())
            return topval;

        int x=pop();
        st.push(topval);
        return x;
    }

    bool empty()
    {
        if(st.empty())
            return true;
        return false;
    }
};

int main()
{
    queue q;
    q.push(12);
    q.push(23);
    q.push(34);
    q.push(45);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<endl<<q.empty()<<endl;
    return 0;
}