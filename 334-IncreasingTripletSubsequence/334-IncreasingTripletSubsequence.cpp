        for(int i=n-2;i>-1;i--) maxNum[i] = max(maxNum[i+1], nums[i]);
        for(int i=1;i<n-1;++i) {
            if(nums[i]>minNum[i-1] && nums[i]<maxNum[i+1]) return true;
        }
        return false;
    }
        }
            minNum[i] = min(minNum[i-1], nums[i]);
        for(int i=1;i<n;++i) {
        maxNum[n-1] = nums[n-1];
[1,2,3,4,5]
