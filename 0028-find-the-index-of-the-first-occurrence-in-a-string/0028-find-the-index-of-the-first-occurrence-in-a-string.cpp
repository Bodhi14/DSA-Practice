class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size()) return -1;
        for(int i = 0, j = needle.size() - 1; j < haystack.size(); i++, j++) {
            if(haystack.substr(i, j-i+1) == needle) return i;
        }
        return -1;
    }
};