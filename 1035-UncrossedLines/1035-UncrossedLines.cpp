        else{
            return dp[idx1][idx2]=max(fun(idx1+1,idx2,n,m,nums1,nums2),fun(idx1,idx2+1,n,m,nums1,nums2));
        }
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        dp=vector<vector<int>>(n,vector<int>(m,-1));
        return fun(0,0,n,m,nums1,nums2);
    }
};
[
