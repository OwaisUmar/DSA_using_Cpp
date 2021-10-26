#include<iostream>
using namespace std;

int powerof2(int n)
{
    return(n && !(n & (n-1)));
}

int main()
{
    cout<<powerof2(18);
    return 0;
}