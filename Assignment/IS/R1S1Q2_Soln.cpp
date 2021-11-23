// 2. Write a program to find the factorial of a number.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a no.:  ";
    cin>>n;
    long long fact=1;
    for(int i=n; i>0; i--)
        fact*=i;
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}