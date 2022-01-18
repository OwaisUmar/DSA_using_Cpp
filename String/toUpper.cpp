#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="This will be converted to UpperCase.";
    for(int i=0; i<s.size(); i++)
        if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
    cout<<s;
    
    string str="5436";
    int x=stoi(str);
    cout<<x+100;

    //Direct function
    //transform(s.begin(), s.end(), s.begin(), ::toupper);

    return 0;
}