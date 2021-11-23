#include<iostream>
#include<stack>
using namespace std;

class queue
{
    stack<int> st1;
    stack<int> st2;   
    public:
    void push(int x)
    {
        st1.push(x);
    } 

    int pop()
    {
        if(st1.empty() && st2.empty())
        {
            cout<<"Queue Underflow\n";
            return -1;
        }
        if(st2.empty())
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        int topval=st2.top();
        st2.pop();
        return topval;
    }

    bool empty()
    {
        if(st1.empty() && st2.empty())
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