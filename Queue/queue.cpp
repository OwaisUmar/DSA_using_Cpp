#include<iostream>
using namespace std;
#define n 100

class queue
{
    int* arr;
    int front, back;
    public:
    queue()
    {
        arr=new int[n];
        front=-1;
        back=-1;        
    }

    void push(int x)
    {
        if(back==n-1)
        {
            cout<<"Queue Overflow\n";
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1)
            front++;
    }

    void pop()
    {
        if((back==-1 && front==-1) || front>back)
        {
            cout<<"Queue Underflow\n";
            return;
        }
        front++;      
    }

    int peek()
    {
        if((back==-1 && front==-1) || front>back)
        {
            cout<<"Queue Underflow\n";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if((back==-1 && front==-1) || front>back)
            return true;
        return false;
    }
};

int main()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    return 0;
}
