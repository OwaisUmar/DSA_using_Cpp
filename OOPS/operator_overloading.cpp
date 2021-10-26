#include<iostream>
using namespace std;

class complex
{
    int real, img;
    public:
    complex(int r=0, int i=0)
    {
        real=r;
        img=i;
    }
    complex operator +(complex &c1)
    {
        complex res;
        res.real = real+c1.real;
        res.img = img+c1.img;
        return res;
    }
    void display()
    {
        cout<<real<<" + "<<img<<"i\n";
    }
};

int main()
{
    complex c1(12,7);
    complex c2(7, 5);
    complex c3 = c1+c2;
    c3.display();
    return 0;
}