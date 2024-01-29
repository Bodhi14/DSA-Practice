            maxSum = max(maxSum, currSum);
        }
        return (double)maxSum/(double)k;
    }
};
            currSum += nums[i+k-1];
            currSum -= nums[i-1];
        for(int i = 1 ; (i+k-1)<n; ++i) {
[
