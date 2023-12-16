class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        if(digits[i]!=9) {
            digits[i]++;
            return digits;
        }
        while(i>=0 && digits[i]==9) {
            digits[i] = 0;
            i--;
        } 
        
        if(i>=0) {
            digits[i]++;
            return digits;
        }
        else {
            reverse(digits.begin(), digits.end());
            digits.push_back(1);
            reverse(digits.begin(), digits.end());
        }
        return digits;
    }
};