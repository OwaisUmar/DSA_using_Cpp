#include<iostream>
using namespace std;

int no_of_1s(int n)
{
    int count=0;
    while(n)
    {
        count++;
        n = (n & (n-1));
    }
    return count;
}


int main()
{
    cout<<no_of_1s(125);
    return 0;
}