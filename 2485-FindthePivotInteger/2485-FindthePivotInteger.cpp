class Solution {
public:
    int pivotInteger(int n) {
        int leftSum = 0, rightSum = 0, TotalSum = 0;
        for(int i = 0; i<n; ++i) {
            leftSum += i+1;
        }
            rightSum = TotalSum - leftSum + i + 1;
            if(leftSum == rightSum) return i+1;
    }
        return -1;
        for(int i = 0; i<n; ++i) TotalSum += i+1;
};
8
