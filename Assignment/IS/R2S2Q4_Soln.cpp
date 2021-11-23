// R2:S2:4. Given a 2-Dimensional matrix: M*M
// Given a Pattern of N digits: 1-Dimensional Array (N<M)
// Search the 1-Dimensional pattern in the 2-Dimensional matrix; row-wise and
// column-wise
// Print “Yes” if it exists
// Hint: A pattern could be 0,0,0 Or 2,4,6,9 Or -1,-2,5,7

#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter value of m: ";
    cin>>m;
    int arr[m][m];
    cout<<"Enter array elements: \n";
    for(int i=0; i<m; i++)
        for(int j=0; j<m; j++)
            cin>>arr[i][j];
    cout<<"Enter value of n (n<m): ";
    int n;
    cin>>n;
    int pattern[n];
    cout<<"Enter your pattern elements:\n";
    for(int i=0; i<n; i++)
        cin>>pattern[i];
    
    for(int i=0; i<m; i++)
    {
        int flag=1;
        for(int j=0; j<m; j++)
        {
            if((j+n-1)<m)
            {
                int p=j;
                for(int x=0; x<n; x++)
                {
                    if(arr[i][p]!=pattern[x])
                    {
                        flag=0;
                        break;
                    }
                    flag=1;
                    p++;
                }
            }
            if(flag)
            {
                cout<<"Yes"<<endl;
                break;
            }
            if((i+n-1)<m)
            {
                int p=i;
                for(int x=0; x<n; x++)
                {
                    if(arr[p][j]!=pattern[x])
                    {
                        flag=0;
                        break;
                    }
                    flag=1;
                    p++;
                }
            }
            if(flag)
            {
                cout<<"Yes"<<endl;
                break;
            }
        }
        if(flag)
            break;
    }
    return 0;
}