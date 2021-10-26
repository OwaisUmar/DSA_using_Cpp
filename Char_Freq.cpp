#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="aegjlshdksjhhshgfurs";
    int count[26];
    for(int i=0; i<26; i++)
        count[i]=0;
    
    for(int i=0; i<s.size(); i++)
        count[s[i]-'a']++;
    
    int maxfreq=0;
    char c='a';
    for(int i=0; i<26; i++)
        if(maxfreq<count[i])
            {
                maxfreq=count[i];
                c='a'+i;
            }
    cout<<maxfreq<<"  "<<c;
    return 0;
}