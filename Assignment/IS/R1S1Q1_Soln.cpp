// 1. Write a program to check whether a number is even or odd.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a no.:  ";
    cin>>n;
    if(n%2)
        cout<<n<<" is odd."<<endl;
    else
        cout<<n<<" is even."<<endl;
    return 0;
}