//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int upper = 1e9 + 7;
    int nthFibonacci(int n){
        //space optimization solution
        if(n<=2) return 1;
        int prevFirst = 1;
        int prevSecond = 1;
        int curr = 0;
        for(int i=3;i<=n;++i) {
            curr = (prevFirst%upper + prevSecond%upper)%upper;
            prevSecond = prevFirst;
            prevFirst = curr;
        }
        return curr;
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