//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
      int upper = 1e9+7;
      
      int solve(int n, int curr, vector<int>& memo) {
          //base case
          if(curr<=2) return memo[curr] = 1;
          if(memo[curr]!=-1) return memo[curr];
          return memo[curr] = (solve(n, curr-1, memo)%upper + solve(n, curr-2, memo)%upper)%upper;
      }
    int nthFibonacci(int n){
        // if(n<=2) return 1;
        // int upper = 1e9+7;
        // vector<int> fib(n+1, 1);
        // for(int i=3;i<=n;++i) fib[i] =( fib[i-1]%upper + fib[i-2]%upper )%upper;
        // return fib[n]%upper;
        vector<int> memo(n+1, -1);
        return solve(n, n, memo);
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends