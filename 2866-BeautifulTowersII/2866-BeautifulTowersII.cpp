        }
        vector<long long>leftSum(n, 0);
        leftSum[0] = maxHeights[0];
        for (int i = 1; i < n; i++)
        {
            int prevSmallerIdx = prevSmaller[i];
            int equalCount = i - prevSmallerIdx; 
            
            leftSum[i] = leftSum[i] + ((long long)equalCount * maxHeights[i]);
            
            if (prevSmallerIdx != -1)
                leftSum[i] += leftSum[prevSmallerIdx];
[
