#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="This will be CONVERTED to LowerCase.";
    for(int i=0; i<s.size(); i++)
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
    cout<<s;

    //Direct function
    //transform(s.begin(), s.end(), s.begin(), ::tolower);
    return 0;
}