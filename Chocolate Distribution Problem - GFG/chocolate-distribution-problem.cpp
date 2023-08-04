//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long min(long long a, long long b) {
        return (a<b) ? a : b;
    }
    long long findMinDiff(vector<long long> a, long long n, long long m){
        // sorting the vector => { 1,3,4,7,9,9,12,56}
        if(n==1) return 0;
        int ans = INT_MAX;
        int N = a.size();
        sort(a.begin(), a.end());
        long long i=0, j=0;
        while((j-i+1)!=m) {
            j++;
        } // until the window size becomes m, we increase our end pointer
        
        while(j<N) {
            ans = min(ans, a[j++]-a[i++]);
        }
        return ans;
    }
        
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends