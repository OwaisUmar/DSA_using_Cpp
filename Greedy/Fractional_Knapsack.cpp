#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


bool cmp(pair<double, int> p1, pair<double, int> p2) {
    return p1.first > p2.first;
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<pair<double, int>> vec;
        for(int i=0; i<n; i++)
            vec.push_back(make_pair(double(arr[i].value/arr[i].weight), i));
        
        sort(vec.begin(), vec.end(), cmp);
        double rem_cap=W;
        int profit=0;
        for(int i=0; i<n; i++) {
            if(arr[vec[i].second].weight<=rem_cap) {
                profit+=arr[vec[i].second].value;
                rem_cap-=arr[vec[i].second].weight;
            }            
            else {
                profit+=rem_cap*vec[i].first;
                break;
            }
        }
        return profit;
    }
        
};


int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends