//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
private:
    int solve(int N, int W, int val[], int wt[], int ind, vector<vector<int>>& dp) {
        
        //base case
        
        if(ind>=N || W<=0) return dp[ind][W] = 0;
        
        //memoization
        
        if(dp[ind][W] != -1) return dp[ind][W];
        
        int take = 0, notTake = 0;
        
        //take
        
        if(W>=wt[ind]) take = val[ind] + solve(N, W-wt[ind], val, wt, ind, dp);
        
        
        // not take
        
        notTake = solve(N, W, val, wt, ind+1, dp);
        
        return dp[ind][W] = max(take, notTake);
    }
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>> dp(N+1, vector<int>(W+1, -1));
        return solve(N, W, val, wt, 0, dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends