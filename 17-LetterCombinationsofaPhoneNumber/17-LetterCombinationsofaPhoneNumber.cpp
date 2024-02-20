        for(auto it:mp[num]) {
            temp+=it;
            f(mp, ans, digits, i+1, temp);
        }
        int num = digits[i] - '0';
        if(i==digits.size()) {
            ans.push_back(temp);
            return;
            temp.pop_back();
        }
        return;
        
"
