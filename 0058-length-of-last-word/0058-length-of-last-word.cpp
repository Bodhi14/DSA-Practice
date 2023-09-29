class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int ptr = s.size()-1;
        for(int i=s.size()-1;i>=0;i--) {
            if(s[i]== ' ') ptr--;
            else break;
        }
        for(int i=ptr;i>=0;--i) {
            
            if(s[i]==' ') break;
            ans++;
        
        }
        return ans;
    }
};