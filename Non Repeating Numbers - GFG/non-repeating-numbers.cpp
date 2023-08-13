//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int num1 = 0;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();++i) {
            mp[nums[i]]++;
        }
        
        for(auto it:mp) {
            if(it.second==1) {
                if(num1) {
                    if(num1>it.first) {
                        return {it.first, num1};
                    }
                    return {num1, it.first};
                }
                else num1 = it.first;
            }
        }
        return {-1, -1};
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends