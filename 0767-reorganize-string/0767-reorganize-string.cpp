class comp {
    public:
        bool operator()(pair<char, int>& a, pair<char, int>& b) {
             return a.second < b.second;
        }
};


class Solution {
    
public:
    string reorganizeString(string s) {
        int n = (int)s.size();
        priority_queue<pair<char, int>, vector<pair<char, int>>, comp> pq;
        
        unordered_map<char, int> mp;
        
        for(auto ch: s) {
            mp[ch]++;
        }
        for(auto i:mp) {
            pq.push({i.first, i.second});
        }
        if(pq.top().second > (n+1)/2) return "";
        //except the above case, for all other cases, it is possible,
        //thus finding out the possible solution using the frequency map, and a max heap
        string ans(n, ' ');
        
        int i = 0, j = 1;
        while(pq.size()) {
            pair<char, int> temp = pq.top();
            pq.pop();
            
            int currfreq = temp.second;
            
            for(; i<n && currfreq; i+=2) {
                ans[i] = temp.first;
                currfreq--;
            }
            
            for(; j < n && currfreq; j += 2){
                ans[j] = temp.first;
                currfreq--;
            }
            
        }
        
        return ans;
    }
};