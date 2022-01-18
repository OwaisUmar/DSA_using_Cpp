#include<iostream>
using namespace std;

int factorial(int x)
{
    int fact=1;
    for(int i=2; i<=x; i++)
        fact*=i;
    return fact;
}

int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<=i; j++)
            cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
        cout<<endl;
    }
    return 0;
}