// R2:S2:5. In a 2D square matrix, print the element with maximum occurrence
// along with the number of occurrences of that element in the matrix.
// If more than one such element exists then print all of those elements with the
// number of occurrences.
// If all elements are unique, then print “Unique”

#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cout<<"Enter value of m and n: ";
    cin>>m>>n;
    int mat[m][n];
    cout<<"Enter array elements:\n";
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>mat[i][j];
    int arr[m*n];
    int x=0;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
        {
            arr[x]=mat[i][j];
            x++;
        }
    
    bool visited[m*n];
    for(int i=0; i<(m*n); i++)            
        visited[i]=false;

    int flag=1;
    int maxfreq=0, maxindex;
    for(int i=0; i<m*n; i++)
    {
        if(visited[i]==true)
            continue;
        int freq=1;
        for(int j=i+1; j<m*n; j++)
        {
            if(arr[i]==arr[j])
            {
                visited[j]=true;
                freq++;
            }
        }
        if(freq>maxfreq)
        {
            maxfreq=freq;
            maxindex=i;
        }
        if(freq>1)
        {   
            flag=0;
            cout<<arr[i]<<": "<<freq<<endl;
        }
    }
    if(flag)
        cout<<"Unique"<<endl;
    else    
        cout<<"Maximum frequency "<<arr[maxindex]<<": "<<maxfreq<<endl;
    
    return 0;
}