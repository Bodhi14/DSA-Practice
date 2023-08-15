//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)   
    {
        
        if(n==1) {
            return 1;
        }
        int sum = 0, ones = 0, ans = 0;
        
        // using the Kadane's algorithm approach
       
        for(int i = 0; i<n; ++i) {
            if(a[i]){ 
                sum-=1;
                ones++;
            }
            else sum+=1;
            ans = max(ans, sum);
            if(sum<0) sum = 0;
        }
        
        return ones+ans;
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends