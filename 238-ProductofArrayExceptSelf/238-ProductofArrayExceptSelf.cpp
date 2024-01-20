            postfix*=nums[i+1];
        }
        for(int i=n-2;i>=0;--i){
            prefix*=nums[i-1];
            ans.push_back(prefix);
        //Multiplying the postfix multiplications with the current index
        ans.push_back(1);
        for(int i=1;i<n;++i) {
        int prefix = 1, postfix=1,n = (int)nums.size();
        vector<int> ans;
[
