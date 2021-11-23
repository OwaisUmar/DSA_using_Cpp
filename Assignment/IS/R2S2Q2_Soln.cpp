// R2:S2:2. WAP to print the smallest positive number that is divisible by all the numbers from M to N.
// Eg: 12 is the smallest number divisible by all the numbers from 1 to 4 (1,2,3,4)


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long sol=1;
    int m, n;
    cout<<"Enter the value of m and n: ";
    cin>>m>>n;
    for(long long i=m; i<=n; i++)
        sol=(sol*i)/(__gcd(sol, i));
    cout<<sol;
    return 0;
}