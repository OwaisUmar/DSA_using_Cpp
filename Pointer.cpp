#include<iostream>
using namespace std;

void add(int *a)
{
    ++*a;
}

int main()
{
    int a=9;
    add(&a);
    cout<<a;
}
