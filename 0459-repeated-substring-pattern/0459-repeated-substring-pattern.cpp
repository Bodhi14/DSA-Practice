class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         //visualization problem
         int n = (int)s.size();
         string temp = s;
        
        for(int i=0;i<n-1;++i) {
            char dummy = temp[0];
            temp.erase(0,1);
            temp.push_back(dummy);
            
            
            if(temp == s) return true;
        }
        return false;
    }
};