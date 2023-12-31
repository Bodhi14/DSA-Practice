class Solution {
public:
    bool isSolvable(vector<string>& words, string result) {
        const int n = words.size();
        int m = 0;
        vector<int> ptrs(n);
        for(int i = 0; i < n; ++i){
            ptrs[i] = words[i].size() - 1;
            m += words[i].size();
        }
        unordered_map<char, int> c2i;
        unordered_map<int, char> i2c;
        auto check = [&](int i, char c){
            if(c2i.count(c) == 0 && i2c.count(i) == 0)
                return 0;
            if(c2i.count(c) > 0 && i2c.count(i) > 0 &&
               c2i.at(c) == i && i2c.at(i) == c)
                return 1;
            return -1; 
        };

        function<bool(int, int, int, int)> recursion = [&](int l_idx, int r_idx, int count, int sum){
            if(l_idx == n){
                const int d = sum % 10, carry = sum / 10;
                const int res = check(d, result[r_idx]);
                bool solved = false;
                if(res >= 0){
                    if(res == 0){
                        c2i.insert({result[r_idx], d});
                        i2c.insert({d, result[r_idx]});
                    }
                    if(count == m){
                        if(carry == 0) solved = r_idx == 0;
                        else if(r_idx == 1) solved = check(carry, result[0]) >= 0;
                    }else if(r_idx > 0)
                        solved = recursion(0, r_idx - 1, count, carry);
                    if(res == 0){
                        c2i.erase(result[r_idx]);
                        i2c.erase(d);
                    }
                }
                return solved;
            }
            if(ptrs[l_idx] < 0)
                return recursion(l_idx + 1, r_idx, count, sum);
            const char c = words[l_idx][ptrs[l_idx]];
            bool solved = false;
            ptrs[l_idx]--;
            if(c2i.count(c) > 0){
                // Leading zero
                if(words[l_idx].size() > 1 && ptrs[l_idx] == -1 && c2i.at(c) == 0) solved = false;
                else solved = recursion(l_idx + 1, r_idx, count + 1, sum + c2i.at(c));
            }else{
                for(int i = 0; i <= 9 && !solved; ++i){
                    if(i2c.count(i) > 0) continue;
                    if(words[l_idx].size() > 1 && ptrs[l_idx] == -1 && i == 0) continue;
                    c2i.insert({c, i});
                    i2c.insert({i, c});
                    solved = recursion(l_idx + 1, r_idx, count + 1, sum + i);
                    c2i.erase(c);
                    i2c.erase(i);
                }
            }
            ptrs[l_idx]++;
            return solved;
        };

        return recursion(0, result.size() - 1, 0, 0);

    }
};