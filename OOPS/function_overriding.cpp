#include<iostream>
using namespace std;

class base
{
    public:
    virtual void display()
    {
        cout<<"This is base class's display function!"<<endl;
    }
    void print()
    {
        cout<<"This is base class's print function!"<<endl;
    }
};

class derived : public base
{
    public:
    void display()
    {   
        cout<<"This is derived class's display function!"<<endl;
    }
    void print()
    {
        cout<<"This is derived class's print function!"<<endl;
    }
};

int main()
{
    base *baseptr;
    derived d;
    baseptr=&d;
    
    baseptr->display();
    baseptr->print();

    return 0;
}