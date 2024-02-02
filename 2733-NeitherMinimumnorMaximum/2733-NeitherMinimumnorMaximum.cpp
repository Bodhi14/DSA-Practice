        for(int x:nums) {
            min_num = min(min_num, x);
            max_num = max(max_num, x);
        }
        for(int x:nums) if(x!=min_num && x!=max_num) return x;
        return -1;
        int min_num = INT_MAX, max_num = INT_MIN;
    int findNonMinOrMax(vector<int>& nums) {
public:
[
