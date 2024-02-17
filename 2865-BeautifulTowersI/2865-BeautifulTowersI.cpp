        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long totalSum = leftSum[i] + rightSum[i] - maxHeights[i];
            ans = max(ans, totalSum);
        }
        return ans;
    }
};
[
