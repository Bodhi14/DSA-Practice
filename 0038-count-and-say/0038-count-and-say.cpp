class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string pstr = countAndSay(n-1);
        string ans = "";
        int ptr = 1, count = 1;
        int ss = pstr.size();
        while(ptr < ss) {
            if(pstr[ptr]!=pstr[ptr-1]) {
                ans += to_string(count);
                ans += pstr[ptr-1];
                count = 1;
            }
            else count++;
            ptr++;
        }
        ptr--;
        ans += to_string(count);
        ans += pstr[ptr];
        return ans;
    }
};