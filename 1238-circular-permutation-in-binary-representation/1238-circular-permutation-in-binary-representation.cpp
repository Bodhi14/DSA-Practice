class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        vector<int > gray_code;
        for(int i=0;i<(1<<n);i++)
            gray_code.push_back(i^(i>>1));
        int idx = 0;
        for(int i=0;i<gray_code.size();i++)
        {
            if(gray_code[i]==start)
            {
                idx = i;
                break;
            }
        }
        rotate(gray_code.begin(),gray_code.begin()+idx,gray_code.end());
        return gray_code;
    }
};