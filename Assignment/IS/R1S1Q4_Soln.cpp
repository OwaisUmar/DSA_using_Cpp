// 4. Write a program for swapping of two strings.

#include<iostream>
using namespace std;

int main()
{
    string s1, s2;
    cout<<"Enter two strings:\n";
    cin>>s1>>s2;
    string temp=s1;
    s1=s2;
    s2=temp;
    cout<<s1<<endl<<s2<<endl;
    return 0;
}