#include<iostream>
using namespace std;

string removedup(string str)
{
    if(str=="")
        return "";
    char ch=str[0];
    string nodup=removedup(str.substr(1));
    if(ch==nodup[0])
        return nodup;
    return ch+nodup;
}

int main()
{
    string str="ooowwwwwaaaaaiiiiissss";
    cout<<removedup(str);
    return 0;
}