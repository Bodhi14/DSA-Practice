//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void solve(int i, int n, string S, string temp, multiset<string>& ans, vector<int> vis) {
        //base case
        if(temp.size()==S.size()) {
            ans.insert(temp);
            return;
        }
        
        for(int i=0;i<n;++i) {
            if(vis[i]) continue;
            temp+=S[i];
            vis[i] = 1;
            solve(i, n, S, temp, ans, vis);
            temp.pop_back();
            vis[i] = 0;
        }
        return;
        
        
    }
    vector<string> permutation(string S)
    {
        int n = S.size();
        multiset<string> ans;
        string temp;
        vector<int> vis(n, 0);
        solve(0, n, S, temp, ans, vis);
        vector<string> res;
        for(string str:ans) {
            res.push_back(str);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends