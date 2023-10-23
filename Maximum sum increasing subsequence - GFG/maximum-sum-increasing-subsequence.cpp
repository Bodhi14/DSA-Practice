//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    // private:
    // int solve(int arr[], int n, int ind, int prev, vector<vector<int>>& dp) {
    //     //base case
    //     if(ind > n) return 0;
    //     if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
    //     int ans = 0;
    
    //     if(prev==-1 || arr[ind]>arr[prev]) ans = max(arr[ind] + solve(arr, n, ind+1, ind, dp), solve(arr, n, ind+1, prev, dp));
    //     else ans = solve(arr, n, ind+1, prev, dp);
    //     return dp[ind][prev+1] = ans;
    // }
	public:
	int maxSumIS(int arr[], int n)  
	{  
	    int dp[n];
	    int ans = 0;
	    for(int i=0;i<n;++i) dp[i] = arr[i];
	    
	    for(int i=0;i<n;++i) {
	        for(int j = 0; j<i; ++j) {
	            if(arr[i] >arr[j]) {
	                dp[i] = max(dp[i], dp[j] + arr[i]);
	            }
	        }
	        ans = max(dp[i], ans);
	    }
	    return ans;
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends