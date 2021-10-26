#include<iostream>
using namespace std;

void towerofhanoi(int n, char src, char des, char helper)
{
    if(n==0)
        return;
    towerofhanoi(n-1, src, helper, des);
    cout<<"Move top disc from "<<src<<" to "<<des<<endl;
    towerofhanoi(n-1, helper, des, src);
}

int main()
{
    towerofhanoi(3, 'A', 'C', 'B');
    return 0;
}