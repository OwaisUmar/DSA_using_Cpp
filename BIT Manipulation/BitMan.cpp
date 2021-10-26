#include<iostream>
using namespace std;

int getbit(int n, int i)
{
    return((n & (1<<i))!=0);
}

int setbit(int n, int i)
{
    return(n | (1<<i));
}

int clearbit(int n, int i)
{
    return(n & ~(1<<i));
}

int updatebit(int n, int i, int bit)
{
    int clear = (n & ~(1<<i));
    return (clear | (bit<<i));
}

int main()
{
    //cout<<getbit(5,2);
    //cout<<setbit(5,1);
    //cout<<clearbit(7,2);
    cout<<updatebit(7,0,0);
    return 0;
}