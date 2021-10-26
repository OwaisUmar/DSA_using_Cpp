#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<endl;
    
    cout<<endl;
    
    vector<int>::iterator itr;
    for(itr=v.end()-1; itr!=v.begin()-1; itr--)
        cout<<*itr<<endl;

    cout<<endl;

    for(auto element:v)
        cout<<element<<endl;

    vector<int> v2(3, 50);
    swap(v, v2);
    v2.pop_back();
    cout<<endl;
    for(auto element:v)
        cout<<element<<endl;
    for(auto element:v2)
        cout<<element<<endl;
    
    return 0;
}
