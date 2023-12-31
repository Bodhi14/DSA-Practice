//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int count(int arr[], int n, int x) {
	    int low = 0, high = n-1, lowInd = -1;
	    //code for lower bound
	    //in equal condition, eliminate right half
	    while(low<=high) {
	        int mid = low + (high-low)/2;
	        if(arr[mid]==x) lowInd = mid;
	        if(arr[mid]<x) low = mid + 1;
	        else high = mid - 1;
	    }
	    if(lowInd==-1) return 0;
	    low = 0, high = n-1;
	    int highInd = -1;
	    //code for higher bound
	    //in equal condition, eliminate left half
	    while(low<=high) {
	        int mid = low + (high-low)/2;
	        if(arr[mid]==x) highInd = mid;
	        if(arr[mid]<=x) low = mid + 1;
	        else high = mid - 1;
	    }
	    
	    return highInd - lowInd + 1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends