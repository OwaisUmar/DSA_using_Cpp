#include<iostream>
using namespace std;

void reverse(string str)
{
    if(str=="")
        return;
    reverse(str.substr(1));
    cout<<str[0];
}

int main()
{
    string str="owais";
    reverse(str);
    return 0;
}